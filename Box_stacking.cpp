class Box
{
    public:
    int h,w,l;
};
bool compare(Box &a,Box &b)
{
    return ((b.l*b.w)<(a.l*a.w));
}
int maxHeight(int height[],int width[],int length[],int n)
{
    Box b[3*n];

    //Your code here
    int index=0;
    for (int i=0;i<n;i++)
    {
        /* first rotation */
        b[index].h=height[i];
        b[index].l=max(length[i],width[i]);
        b[index].w=min(width[i],length[i]);
        index++;

        /* Second rotation */


        b[index].h=width[i];
        b[index].l=max(length[i],height[i]);
        b[index].w=min(height[i],length[i]);
        index++;

       /* third rotation */

        b[index].h=length[i];
        b[index].l=max(width[i],height[i]);
        b[index].w=min(height[i],width[i]);
        index++;
    }
    n=3*n;
     sort(b,b+n,compare);

/*   for (int i = 0; i < n; i++ )
    {
    cout<<b[i].h<<" "<<b[i].l<<" "<<b[i].w<<" "<<endl;
    }
*/
    int dp[n];
    for (int i=0;i<n;i++)
    {
        dp[i]=b[i].h;
    }
    for (int i=1;i<n;i++)
    {
        for (int j=0;j<i;j++)
        {
            if ((b[i].w <b[j].w) && (b[i].l <b[j].l )&& (dp[i] < dp[j] + b[i].h ))
            {
                dp[i]=dp[j]+b[i].h;
            }
        }
    }
    sort(dp,dp+n,greater<int>());
    return dp[0];

}
