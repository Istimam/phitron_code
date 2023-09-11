#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    priority_queue<int,vector<int>,greater<int>> pq;
    while (num--)
    {
        int val;
        cin>>val;
        pq.push(val);
    }
    int t;
    cin>>t;
    while (t--)
    {
        int command;
        cin>>command;
        if(command == 0)
        {
            int x;
            cin>>x;
            pq.push(x);
            cout<<pq.top()<<endl;
        }
        else if(command == 1)
        {
            if(pq.empty())
            {
                cout<<"Empty"<<endl;
            }
            else
            {
                cout<<pq.top()<<endl;
            }
        }
        else if(command == 2)
        {
            if(pq.empty())
            {
                cout<<"Empty"<<endl;
            }   
            else
            {
                pq.pop();
                if(pq.empty())
                {
                    cout<<"Empty"<<endl;
                }
                else
                {
                    cout<<pq.top()<<endl;
                }
            }
        }
    }  
    return 0;
}