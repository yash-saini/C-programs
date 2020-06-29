#include<bits/stdc++.h>
using namespace std;
int main()
{

/* sort north blocks as per south, and then apply Longest increasing sequence on north block to calculate no of bridges that could be made without crossing each other */
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    for (int i=0;i<n;i++)
    {

        cin>>arr1[i];
    }
    for (int i=0;i<n;i++)
    {

        cin>>arr2[i];
    }
    map <int,int> mp;
    for (int i=0;i<n;i++)
    {
        mp[arr2[i]]=arr1[i];
    }
    vector <int> v;

    map<int,int>:: iterator x;

    for(x=mp.begin(); x!=mp.end(); x++ )
    {
        v.push_back(x->second);

    }
    cout<<endl;
    int dp[n];
    dp[0]=1;
    for (int i=1; i<=n;i++)
    {

        dp[i]=1;
    }
    for (int i=1; i<v.size();i++)
    {
        for (int j=0;j<i;j++)
        {
            if( v[i]> v[j])
            dp[i]=max(dp[i],dp[j]+1);
        }

    }
    sort(dp,dp+n,greater<int>());
    cout<<dp[0]<<endl;



}
