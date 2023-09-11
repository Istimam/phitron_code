#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    stringstream ss(str);
    string w;
    ss>>w;
    reverse(w.begin(),w.end());
    cout<<w;
    while(ss>>w)
    {
        cout<<" ";
        reverse(w.begin(),w.end());
        cout<<w;
    }

    return 0;
}