#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(isalpha(c)==1)
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    else if(isalpha(c)==2)
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    else
    {
        cout<<"IS DIGIT";
    }
    return 0;
}