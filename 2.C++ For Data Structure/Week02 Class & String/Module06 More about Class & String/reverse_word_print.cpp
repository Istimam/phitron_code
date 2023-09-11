#include<bits/stdc++.h>
using namespace std;
void print(stringstream&/*Referrence*/ ss)
{
     string word;
     /*Base case*/
     if(ss>>word)
     {
        /*Recursion*/
        print(ss);
        cout<<word<<endl;
     }
}
int main()
{
    string s;
    getline(cin,s);
    /*Word printing using stringstream*/
    // stringstream ss(s);
    // string t;
    // while (ss>>t)
    // {
    //     cout<<t<<endl;
    // }
    /*Reverse*/
    stringstream ss(s);
    string t;
    print(ss);
    while (ss>>t)
    {
        cout<<t<<endl;
    }
    return 0;
}