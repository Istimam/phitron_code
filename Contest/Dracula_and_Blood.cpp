#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int cnt = 0;
        vector<int> bottle;
        int sz = s.size();
        for (int i = 0; i < sz; i++)
        {
            if(s[i] == '0')
            {
                cnt++;
            }
        }
        if(cnt == sz)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int blood_bottles = 0;
            while (sz--)
            {
                if(s[sz] == '1')
                {
                    blood_bottles++;
                }
                else
                {
                    bottle.push_back(blood_bottles);
                    blood_bottles = 0;
                }
            }
            bottle.push_back(blood_bottles);
            sort(bottle.begin(),bottle.end(),greater<int>());
            int i = 0;
            for(int v = 0; v < bottle.size(); v = v + 2)
            {
                i = i + bottle[v];
                // cout<<"kkf"<<bottle[v]<<" ";
            }
            cout<<i<<endl;
            // for(int v:bottle)
            // {
            //     cout<<v<<" ";
            // }
            // cout<<endl;
        }
    }
    return 0;
}