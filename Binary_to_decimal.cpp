# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,base=1,j=0;
    while(n)
    {
        sum+=(base)*(n%10);
        n=n/10;
        base=base *2;

    }
    return sum;
}

