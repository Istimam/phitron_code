#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(0);
    // cout<<v.max_size()<<endl;
    
    /*Capacity*/
    // cout<<v.capacity()<<endl;
    // v.push_back(10);
    // cout<<v.capacity()<<endl;
    // v.push_back(12);
    // cout<<v.capacity()<<endl;
    // v.push_back(90);
    // cout<<v.capacity()<<endl;
    // v.push_back(40);
    // cout<<v.capacity()<<endl;
    // v.push_back(40);
    // cout<<v.capacity()<<endl;
    
    /*Clear*/
    // v.push_back(90);
    // v.push_back(78);
    // v.push_back(98);
    // v.push_back(4);
    // v.clear();
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<v[3]<<endl;
    
    /*Resize*/
    v.push_back(90);
    v.push_back(78);
    v.push_back(98);
    v.push_back(4);
    v.resize(2);
    v.resize(5);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}