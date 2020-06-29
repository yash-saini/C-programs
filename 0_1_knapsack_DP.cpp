#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cap=50;
    int w[]={10,20,30};
    int value[]={60,100,95};
    int n=3;
    int arr[n+1][cap+1];
    for (int i=0; i<=n;i++)
    {
        for (int j=0;j<=cap;j++)
        {
            if (i==0 || j==0)
                arr[i][j]=0;
            else if (w[i-1] >j)
            arr[i][j]=arr[i-1][j];
            else
                arr[i][j]=max(value[i-1]+arr[i-1][j-w[i-1]],arr[i-1][j]);
        }
    }
    cout<<arr[n][cap]<<endl;
    return 0;
}
