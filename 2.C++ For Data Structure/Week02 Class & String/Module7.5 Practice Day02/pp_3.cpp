#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    getline(cin,a);
    cin>>b;
    int cm=0;
    stringstream ss(a);
    string word;
    while(ss>>word)
    {
        if(word == b)
        {
            cm++;
        }
    }
    // if(a.find(b)) cm++;
    cout<<cm;
    return 0;
}