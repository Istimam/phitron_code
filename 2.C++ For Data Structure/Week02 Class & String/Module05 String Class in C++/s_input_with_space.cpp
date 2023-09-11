#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    //getchar();
    cin.ignore();// enter ignore kore
    string s;

    /*static string*/
    // cin>>s; //input without space
    // char s[100];
    // cin.getline(s,100);// evabe static string input nei
    
    getline(cin,s);// input with space 
    cout<<s<<endl;
    return 0;
}