#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> x={10,20,24,53};
    // for (int i = 0; i < x.size(); i++)
    // {
    //     cout<<x[i]<<" ";
    // }
    /*Insert*/
    // vector<int> x={10,20,24,53};
    // for (int s:x)
    // {
    //     cout<<s<<" ";
    // }
    vector<int> v={1,2,3,4,5};
    v.erase(v.begin()+2, v.end());
    for (int s:v)
    {
        cout<<s<<" ";
    }
    return 0;
}