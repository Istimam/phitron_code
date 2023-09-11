#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // cin.ignore();
    while (n--)
    {
        stack<char> st;
        int x;
        cin>>x;
        while (x--)
        {
            char ch;
            cin>>ch;
            // cout<<c<<" ";
            if(st.empty())
            {
                st.push(ch);
            }
            else
            {
                if(st.top() =='R' && ch == 'B' || st.top() == 'B' && ch == 'R')
                {
                    st.pop();
                    if(st.empty())
                    {
                        st.push('P');
                    }
                    else
                    {
                        if(st.top() == 'P')
                        {
                            st.pop();
                        }
                        else
                        {
                            st.push('P');
                        }
                    }
                }
                else if(st.top() == 'R' && ch == 'G' || st.top() == 'G' && ch == 'R')
                {
                    st.pop();
                    if(st.empty())
                    {
                        st.push('Y');
                    }
                    else
                    {
                        if(st.top() == 'Y')
                        {
                            st.pop();
                        }
                        else
                        {
                            st.push('Y');
                        }
                    }
                }
                else if(st.top() == 'B' && ch == 'G' || st.top() == 'G' && ch == 'B')
                {
                    st.pop();
                    if(st.empty())
                    {
                        st.push('C');
                    }
                    else
                    {
                        if(st.top() == 'C')
                        {
                            st.pop();
                        }
                        else
                        {
                            st.push('C');
                        }
                    }
                }
                else
                {
                    if(st.top() == ch)
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(ch);
                    }
                }
            }
        }
    if(st.empty())
    {
        cout<<endl;
    }
    else
    {
        stack<char> st2;
        while (!st.empty())
        {
            st2.push(st.top());
            st.pop();
        }
        while (!st2.empty())
        {
            cout<<st2.top();
            st2.pop();
        }
        cout<<endl;
    }
    }    
return 0;
}