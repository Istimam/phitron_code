#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    char s,t;
    cin>>a>>s>>b>>t>>c;
    if(s=='+')
    {
        long long int sum=a+b;
        if(sum==c)
        {
            cout<<"Yes";
        }
        else 
        {
            cout<<sum;
        }
    }
    else if(s=='-')
    {
        long long int sub=a-b;
        if(sub==c)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<sub;
        }
    }
    else if(s=='*')
    {
        long long int mul=a*b;
        if(mul==c)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<mul;
        }
    }
    return 0;
}