#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    vector<int> v(26,0);
    for (int i = 0; i < a.size(); i++)
    {
        int temp = a[i]-'a';
        v[temp]++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if(v[i] != 0)
        {
            char c = i+'a';
            cout<<c<<" : "<<v[i]<<endl;
        }
    }
    return 0;
}