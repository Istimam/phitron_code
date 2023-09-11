#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    mp.insert({"sakib al hasan",75});
    mp.insert({"Tamim",19});
    mp.insert({"Shamim",79});


    cout<<mp["Shamim"] <<endl; // value dekhte caile

    // string ta ase kina
    if(mp.count("akib"))
    {
        cout<<"Ase"<<endl;
    }
    else
    {
        cout<<"Nai"<<endl;
    }

    mp["Sakib"] = 79;
    mp["akib"] = 0;
    mp["tamim"] = 75;
    
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;  // O(logN)
    }
    return 0;
}