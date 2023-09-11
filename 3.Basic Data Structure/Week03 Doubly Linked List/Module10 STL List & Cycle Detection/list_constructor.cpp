#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> myList;
    // list<int> myList();
    // list<int> myList(10,0);
    // cout<<myList.front()<<endl;

    /*copy List*/
    // list<int> myList2 = {1,2,3,4,5};
    // list<int> myList(myList2);
    // for(auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout<< *it <<endl;
    // }
    // cout<<"List Size: "<<myList.size();

    /*Initialize List by an Array*/     
    // int a[5] = {10,20,30,40,50};
    // list<int> myList(a,a+5);
    // for(auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout<< *it <<endl;
    // }
    // cout<<"List Size: "<<myList.size();
    
    /*Initialize List by Vectot*/
    vector<int> v = {10,20,30};
    // list<int> myList(v); // evabe chinbe na vector ke
    list<int> myList(v.begin(),v.end()); // Start and End Pointer die dite hbe
    // for(auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout<< *it <<endl;
    // }
    for(int val : myList) // Range Based for loop
    {

        cout<< val <<endl;
    }
    cout<<"List Size: "<<myList.size();

    return 0;
}