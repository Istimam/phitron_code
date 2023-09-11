#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s="Hello World";
    /*The Length of a string*/
    // cout<<s.size()<<endl;
    /*Max Length*/
    // cout<<s.max_size();
    /*Capacity of a Variable(Dynamic)*/
    // string s="lsjflslkjfjooljfd";
    // cout<<s.capacity();
    /*To delete the string*/
    // s.clear();
    // cout<<s;
    
    
    /*Boolean value True or False return kore*/
    // string t="skjf";
    // if(t.empty()==true) cout<<"Empty"<<endl;
    // else cout<<"Not Empty"<<endl;

    /*Resize*/
    string s;
    cin>>s;
    s.resize(5);
    s.resize(8,'gello');
    cout<<s<<endl;
    return 0;
}