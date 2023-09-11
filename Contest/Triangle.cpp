#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x==0 && y==0 && z==0)
    {
        cout<<"No"<<endl;
    }
    else if(x==y && x==z && y==z)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}