#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string a="Hello";
    // string b="world";
    // a=a+b;
    /*Append*/
    // a+=b;
    /*or*/
    // a.append(b);
    // cout<<a<<endl;
    // cout<<b<<endl;
    
    /*Push Back*/
    // string a="Hello";
    // string b="A";
    // a[5]='A';//didn't work
    // a="HelloA";//works
    // a=a+'A';//works
    // a=a+"A";//works
    // a=a+b; //works
    // a.push_back('A');//works
    // cout<<a<<endl;
    
    /*Pop Back*/

    /*Erase*/
    // string a="HelloWorld";
    // // a.erase(4);//after index 4 all will be gone
    // a.erase(4,1);//after 4 index 1 element will erase
    // cout<<a<<endl;
    
    /*Replace*/
    string a="HelloWorld";
    a.replace(4,1,"so");
    a.insert(4,"rahat");
    cout<<a<<endl;
    return 0;
}