#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    queue<int> q;
    int m,n;
    cin>>n>>m;
    while (n--)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    while (m--)
    {
        int x;
        cin>>x;
        q.push(x);
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