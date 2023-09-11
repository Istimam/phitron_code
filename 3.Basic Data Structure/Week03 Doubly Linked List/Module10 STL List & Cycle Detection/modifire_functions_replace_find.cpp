#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*Replace Function*/
    list<int> myList = {10,20,30,20,40,30,100,50};
    // replace(myList.begin(), myList.end(),30,100);
    // for(int val : myList)
    // {
    //     cout<< val <<endl;
    // }

    /*Find Function*/
    auto it = find(myList.begin(), myList.end(), 40);
    cout<< *it<<endl; // Garbage value dey jokhon baire chole jay
    if(it == myList.end())
    {
        cout<< " Not Found"<<endl;
    }
    else
    {
        cout<< "Found"<<endl;
    }
    return 0;
}