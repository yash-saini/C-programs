# include <bits/stdc++.h>
using namespace std;
int main()
{

    int cap=50;
    int w[]={10,20,30};
    int value[]={60,100,95};
    int n=3;
    int dp[cap+1];
    memset(dp, 0, sizeof(dp));
    for (int i=0;i< n;i++)
    {

        for (int j=cap;j> w[i];j--)
        {
            dp[j]=max(dp[j],val[i]+dp[j-w[i]]);

        }
    }
    cout<<dp[cap]<<endl;
    return 0;
}
