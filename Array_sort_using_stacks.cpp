#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,k;
    stack <int> input;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        for (int i=0;i<n;i++)
        {
            cin>>k;
            input.push(k);

        }
        stack <int> mystack; //tmeporary stack
        while (input.size()>0)
        {
            int temp=input.top();
            input.pop();
            while (mystack.size() > 0  && mystack.top() < temp )
            {
                int c=mystack.top();
                mystack.pop();
                input.push(c);
            }
            mystack.push(temp);
        }

        while (mystack.size()>0)
        {
            cout<<mystack.top()<<" ";
            mystack.pop();
        }




    }
	//code
	return 0;
}
