#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    int n;
    cin>>n;
    // cin.ignore();
    while (n--)
    {
        int v; 
        string s;
        cin>>v;
        if(v==0)
        {
            cin.ignore();
            getline(cin,s);
            q.push(s);
        }
        // cout<<v<<" "<<s<<endl;
        else if(v==1)
        {
            if(q.empty())
            {
                cout<<"Invalid"<<endl;
            }
            else
            {
                cout<<q.front()<<endl;
                q.pop();
            }
        }
    }
    
    return 0;
}