/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
// Write your code here
#include <bits/stdc++.h>
using namespace std;
bool compare(pair <long long,int> &g, pair <long long,int> &g1)
{
    if (g.first==g1.first)
    return (g.second <g1.second);
    else
    return (g.first < g1.first);
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,a,b,c,p,q;
        cin>>n>>a>>b>>c;
        vector <pair <long long, int>> v1;
        for (long long i=0;i<n;i++)
        {
            cin>>p>>q;
            v1.push_back(make_pair(p,1));
            v1.push_back(make_pair(q,2));
        }
        sort(v1.begin(),v1.end(),compare);

        long long ans=n*a;
        long long curr=n*a;
        for (long long i=0; i<2*n; i++)
        {
           if (v1[i].second==1)
           curr+=(b-a);

           else
           curr+=(c-b);
           ans=max(ans,curr);
        }
        cout<<ans<<endl;

    }
}
