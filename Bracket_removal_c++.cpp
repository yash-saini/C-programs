# include <bits/stdc++.h>
using namespace std;
int main()
{
    string input,ns;
    cout<<"enter the string"<<endl;
    cin>>input;
    int len=input.length();

    stack <int> st;
    st.push(0);
    for (int i=0; i<len;i++)
    {
        if (input[i]=='+')
        {
            if (st.top()==1)
            ns+='-';
            else
            ns+='+';
        }
        else if (input[i]=='-')
        {
            if (st.top()==1)
            ns+='+';
            else
            ns+='-';
        }
        else if (input[i]=='(' && i>0)
        {
            if (input[i-1]=='-')
            {
                st.push(1);
            }
            else
                st.push(0);
        }
        else if (input[i]==')' && i>0)
        {
            st.pop();
        }
        else
        {
            ns+=input[i];
        }


    }
    cout<<ns<<endl;


}
