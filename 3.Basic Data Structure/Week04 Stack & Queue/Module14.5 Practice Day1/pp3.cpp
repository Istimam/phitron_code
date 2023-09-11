#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<int> s;
    while (n--)
    {
        int m;
        cin>>m;
        s.push(m);
    }
    stack<int> st;
    while (!s.empty())
    {
        st.push(s.top());
        s.pop();
    }
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}