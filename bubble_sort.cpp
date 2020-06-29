#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int *arr;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        arr=new int[n];
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }



        for (int i=0;i<n-1;i++)
           {

            for (int j=0; j<n-i-1;j++)
            {
                if (arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                }

            }
           }
           for (int i=0;i<n;i++)
        {
            cout << arr[i]<<" ";
        }
        cout<<endl;
    }
	//code
	return 0;
}
