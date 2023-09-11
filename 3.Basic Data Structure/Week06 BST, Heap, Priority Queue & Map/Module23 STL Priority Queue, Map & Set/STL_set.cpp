#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin>>n;
    while (n--)
    {
        int x;
        cin>>x;
        s.insert(x); // O(logN)
    }
    cout<<s.count(100)<<endl; // O(logN)
    /* checking if 1000 is present in the set list*/
    if(s.count(1000))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }  
    return 0;
}