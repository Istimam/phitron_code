#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> myList = {10,20,30};
    // cout<<myList.max_size();
    // myList.clear();
    // cout<<myList.size();

    /*Resize*/
    list<int> myList = {10,20,30};
    myList.resize(5,2);
    for(int val : myList)
    {
        cout<<val<<" ";
    }
    return 0;
}