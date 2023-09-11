#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string a ="EGYPT";
    while (s.find("EGYPT")!=-1)
    {
        s.replace(s.find("EGYPT"),5," ");
    }
    // int t = s.find(a);
    // s.replace(t,5," ");
    cout<<s;
    return 0;
}