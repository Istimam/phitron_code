#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    queue<pair<int,string>> q;
    for(auto t:s)
    {
        if(t <= '9' && t >= '1')
        {
            int num = t - '0';
            q.push({num,""});
        }
        else if(t >= 'a' && t <= 'z')
        {
            q.back().second += t;
        }
        else
        {
            int n = q.front().first;
            string str = q.front().second;
            q.pop();
           while (n--)
           {
                cout<<str;
           }
           cout<<t;    
        }
    }
    // while (!q.empty())
    // {
    //     cout<<q.front().first<<" "<<q.front().second<<endl;
    //     q.pop();
    // }
    int n = q.front().first;
    string str = q.front().second;
    q.pop();
    while (n--)
    {
        cout<<str;
    }
    return 0;
}