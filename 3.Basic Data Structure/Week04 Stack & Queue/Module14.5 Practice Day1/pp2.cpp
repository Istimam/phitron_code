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
    int m;
    cin>>m;
    queue<int> q;
    while (m--)
    {
        int t;
        cin>>t;
        q.push(t);        
    }
    
    if(s.size() != q.size())
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int flag = 1;
        while (!s.empty())
        {
            if(s.top() != q.front())
            {
                flag = 0;
                break;
            }         
            s.pop();
            q.pop();   
        }
        if(flag == 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}