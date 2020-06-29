#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* count 1 at odd places and at even places and subtrct the count if it is divisible by 3 then the no is divisible by 3*/
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string k;
        cin>>k;
       if ((k.length()==1) && (k[0]='0'))
       cout<<1<<endl;
       else if ((k.length()==1) && (k[0]='1'))
       cout<<0<<endl;
       else
       { long odd_count=0,even_count=0;

        for (long long i=(k.length()-1);i>=0;i--)
        {
            if (k[i]=='1' && i%2==0)
            {
                even_count++;
            }
            else if  (k[i]=='1' && i%2!=0)
            {
                odd_count++;
            }


        }
        if (abs(odd_count-even_count)%3==0)
        cout<<1<<endl;
        else
        cout<<0<<endl;
       }

    }
	//code
	return 1;
}
