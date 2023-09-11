#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        vector<pair<int,int>> freq;
        cin>>n;
        while (n--)
        {
            int val;
            cin>>val;
            bool found = false;
            for(auto& p:freq)
            {
                if(p.first == val)
                {
                    p.second++;
                    found = true;
                    break;
                }
            }
            if(!found)
            {
                freq.push_back(make_pair(val,1));
            }
        }
        for(auto p:freq)
        {
            int x = p.second;

            if(p.second%2 != 0)
            {
                cout<<p.first<<endl;
            }
        }   
    }
    
    return 0;
}