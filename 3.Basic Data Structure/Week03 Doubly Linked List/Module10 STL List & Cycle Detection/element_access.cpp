#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10,20,30,40,50};
    cout<<myList.front()<<endl; // Head
    cout<<myList.back()<<endl; // Tail
    cout<< *next(myList.begin(),3); // Any Element
    return 0;
}