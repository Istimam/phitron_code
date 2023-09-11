#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*Assign a list = oprator*/
    // list<int> myList = {10,20,30};
    // list<int> myList2;
    // myList2 = myList;
    // for(int val : myList2)
    // {
    //     cout<<val<<endl;
    // }  

    /*Delete a Node*/
    // list<int> myList = {10,20,30};
    // myList.pop_back(); // Deletes tail node 
    // myList.pop_front(); // Deleltes head node
    // for(int val : myList)
    // {
    //     cout<<val<<endl;
    // }  

    /*Insert at any pos*/
    // list<int> myList = {10,20,30};
    // // myList.insert(myList.begin()+2,100); // NOT POSSIBLE
    // myList.insert(next(myList.begin(),2),100);
    /*Multiple value Insert*/
    
    /*Another List Insert*/
    // list<int> newList = {100,200,39};
    // myList.insert(next(myList.begin(),3),newList.begin(),newList.end());
    
    // for(int val : myList) // O(N)
    // {
    //     cout<<val<<endl;
    // }

    /*Delete any pos*/  
    list<int> myList = {10,20,30,40,50};
    // myList.insert(myList.begin()+2,100); // NOT POSSIBLE
    // myList.erase(next(myList.begin(),2)); // Specific Node Delete
    myList.erase(next(myList.begin(),2),next(myList.begin(),5)); // More than one node Delete
    for(int val : myList) // O(N)
    {
        cout<<val<<endl;
    }  
    return 0;
}