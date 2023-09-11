#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char c;
    cin>>a>>c>>b;
    if(a>b && c=='>')
    {
        cout<<"Right";
    }
    else if(a<b && c=='<')
    {
        cout<<"Right";
    }
    else if(a==b && c=='=')
    {
        cout<<"Right";
    }
    else
    {
        cout<<"Wrong";
    }
    // cout<<a<<" "<<c<<" "<<b;
    return 0;
}