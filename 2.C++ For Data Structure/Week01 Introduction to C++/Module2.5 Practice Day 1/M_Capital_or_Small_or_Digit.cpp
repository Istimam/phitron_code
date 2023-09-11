#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c<=58 && c>=48)
    {
        cout<<"IS DIGIT"<<endl;
    }
    else if(c>=97 && c<=125)
    {
        cout<<"ALPHA"<<endl;  
        cout<<"IS SMALL"<<endl;
    }
    else
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    return 0;
}