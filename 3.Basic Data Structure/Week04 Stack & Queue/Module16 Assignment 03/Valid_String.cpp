#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while (n--)
    {
        stack<char> st;
        string s;
        getline(cin,s);
        // cout<<s<<endl;     
        for(char c:s)
        {
            if(st.empty())
            {
                st.push(c);
            }
            else
            {
                if(st.top()==c)
                {
                   st.push(c); 
                }
                else
                {
                    st.pop();
                }
            }
        }   
        if(st.empty())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }   
    return 0;
}