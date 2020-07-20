# include <iostream>
# include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    int *arr;
    cin>>t;
    while (t--)
    {

        cin>>n;
        arr=new int[n];
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
         int count=0 ;//keeps track of non 0 elements
         for (int i=0;i<n;i++)
         {
             if (arr[i]!=0)
             {
                 swap(arr[i],arr[count]);
                 count++;
             }

         }

        for (int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
