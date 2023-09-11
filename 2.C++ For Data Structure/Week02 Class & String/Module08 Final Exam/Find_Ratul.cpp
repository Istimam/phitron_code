#include<bits/stdc++.h>
using namespace std;
int main()
{
    string b;
    getline(cin,b);
    stringstream ss(b);
    string a="Ratul";
    string check;
    int cnt=0;
    while (ss>>check)
    {
       if(a==check)
       {
        cnt=1;
        break;
       }
    }
    if(cnt==0)
    {
        cout<<"NO";
    }
    else cout<<"YES";
    
    return 0;
}