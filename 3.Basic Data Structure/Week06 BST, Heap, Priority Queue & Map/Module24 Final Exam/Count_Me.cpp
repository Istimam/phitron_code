#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string sentence;
        getline(cin,sentence);
        string word;
        stringstream ss(sentence);
        map<string,int> mp;
        string freq = "";
        int maxcnt = 0;
        while (ss>>word)
        {
            if(!word.empty())
            {
                mp[word]++;
                if(mp[word]>maxcnt)
                {
                    freq = word;
                    maxcnt = mp[word];
                }
            }
        }
        cout<<freq<<" "<<maxcnt<<endl;
    }
    return 0;
}