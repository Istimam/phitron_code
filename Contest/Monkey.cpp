#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
    // cin.ignore();
        sort(s.begin(),s.end());
        for(char ch:s)
        {
            if(ch >= 'a' && ch <= 'z')
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}