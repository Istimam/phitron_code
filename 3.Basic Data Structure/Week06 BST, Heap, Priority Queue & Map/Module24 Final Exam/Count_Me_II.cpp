#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while (t--)
    {
        map<int,int> mp;
        int num;
        cin>>num;
        while (num--)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        
        int frequency = 0;
        for(auto ii:mp)
        {
            if(frequency < ii.second)
            {
                frequency = ii.second;
            }
        }
        int cnt = 0;
        for(auto ij:mp)
        {
            if(ij.second == frequency)
            {
                cnt++;
            }
        }
        if(cnt>1)
        {
            int check = INT_MIN;
            for(auto i:mp)
            {
                if(i.first > check && i.second == frequency)
                {
                    check = i.first;
                }
            }
            cout<<check<<" "<<frequency<<endl;
        }
        else if(cnt == 1)
        {
            for(auto i:mp)
            {
                if(i.second == frequency)
                {
                    cout<<i.first<<" "<<i.second<<endl;
                    break;
                }
            }
        }
        // for(auto t:mp)
        // {
        //     cout<<t.first<<" "<<t.second<<endl;
        // }
    }    
    return 0;
}