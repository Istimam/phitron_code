#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int m;
        cin>>m;
        list<int> v;
        while (m--)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        v.sort(greater<int> ());
        v.unique();
        while (!v.empty())
        {
            cout<<v.front()<<" ";
            v.pop_front();
        }    
        cout<<endl;
    }
    return 0;
}