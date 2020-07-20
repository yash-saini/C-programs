#include <bits/stdc++.h>
using namespace std;
int Dynamic(int n, int k)
{
    int dp[n+1][k+1];
    for (int i=0;i<=k;i++)
    {
        dp[0][i]=0;
    }
    for (int i=0;i<=n;i++)
    {

        dp[i][0]=0;
    }
    for (int i=1 ;i<=n;i++)
    {

        for (int j=1;j<=k;j++)
        {
            if (j==1 || i==j)
                dp[i][j]=1;
            else if (j>i)
                dp[i][j]=0;
            else
                dp[i][j] = j*dp[i-1][j]+dp[i-1][j-1];
        }
    }
    return dp[n][k];

}
int S(int n, int k)
{
    if (n==0 || k==0 || k>n)
        return 0;
    if ( k==n || k==1)
        return 1;
    return ( k*S(n-1,k)+ S(n-1,k-1));
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i=0;i<n;i++)
        cin>>arr[i];
    /* Recursion */
    cout<<S(n,k)<<endl;
    cout<<Dynamic(n,k)<<endl;
    return 0;
}
