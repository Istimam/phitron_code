#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    while (true)
    {
        int c;
        cin>>c;
        if(c == 0)
        {
            int x;
            cin>>x;
            //value insert
            pq.push(x); // O(logN)
        }
        else if(c == 1)
        {
            // delete top value
            pq.pop(); // O(logN)
        }
        else if(c == 2)
        {
            // print top vlaue
            cout<<pq.top()<<endl; // O(1)
        }
        else
        {
            break;
        }
    }      
    return 0;
}