#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout<<s[i]<<endl; 
    // }
    // cout<<s.begin()<<endl; //pointer tai eta wrong
    // cout<<*s.begin()<<endl;
    // cout<<*(s.end()-1)<<endl;
    
    /*iterator function*/
    // string:: iterator it;
    // for(it=s.begin();it<s.end();it++)
    // {
    //     cout<<*it;
    // }
    
    /*or*/
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout<<*it<<" ";
    }
    
    return 0;
}