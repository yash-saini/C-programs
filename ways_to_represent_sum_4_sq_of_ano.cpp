/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        long long div=0;
        long long even=0,odd=0;
        for (long long i=1;i<=sqrt(n);i++)
            {
                if ( (n%i) ==0)
                {
                    if (i%2==0)
                    even+=i;
                    else
                    odd+=i;

                    long long y= n/i;
                    if (y != i)
                    {
                    if (y%2==0)
                    even+=y;
                    else
                    odd+=y;
                    }
                }
            }
        if (n%2 ==0 )
        {
            cout<<24*(odd)<<endl;
        }
        else if (n%2 !=0)
        {

            cout<<8*(odd+even)<<endl;
        }
    }
    return 0;
}
