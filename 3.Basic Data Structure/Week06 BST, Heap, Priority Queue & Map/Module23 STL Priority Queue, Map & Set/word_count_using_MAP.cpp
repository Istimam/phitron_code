#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    getline(cin,sentence);
    string word;
    stringstream ss(sentence);
    map<string,int> mp;
    while (ss>>word)
    {
        // cout<<word<<endl;
        mp[word]++;
    }
    vector<int> v;
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        v.push_back(it->second);
        // cout<<it->first<<" "<<it->second<<endl;
    }
    for(int i:v)
    {   
        cout<<i<<endl;
    }
    // cout<<mp["love"]<<endl;
    return 0;
}