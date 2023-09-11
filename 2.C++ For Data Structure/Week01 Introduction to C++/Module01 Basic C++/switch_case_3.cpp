#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    /*condition deya jabe na*/
    /*1kta specific value dite hbe*/
    switch (a%2) // 0 or 1
    {
    case 0:
        cout<<"Even";
        break;
    
    default:
        cout<<"Odd";
    }
    return 0;
}