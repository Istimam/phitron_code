#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string w;
    int cnt=0;
    while (ss>>w)
    {
        int t = w.size();
       cnt++;
       cout<<t<<endl;
    }
    // cout<<cnt;
    return 0;
}