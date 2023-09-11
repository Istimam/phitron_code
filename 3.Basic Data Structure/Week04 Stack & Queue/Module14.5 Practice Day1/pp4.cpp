#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    queue<int> q;
    while (t--)
    {
        int s;
        cin>>s;
        q.push(s);
    }
    stack<int> s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();        
    }
    queue<int> q1;
    while (!s.empty())
    {
        q1.push(s.top());
        s.pop();
    }
    while (!q1.empty())
    {
        cout<<q1.front()<<" ";   
        q1.pop();     
    }
    cout<<endl;
    return 0;
}