#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;
    while (true)
    {
        int v;
        cin>>v;
        if(v ==- 1)
        {
            break;
        }
        myList.push_back(v);        
    }
    // myList.remove(10); // Removes every occourences of 10 
    
    // sort(myList.begin(), myList." "),greater<int> ()); // This is for vector
    myList.sort(); // Accending
    // myList.sort(greater<int>()); //Deccending

    // myList.sort(); // Accending
    myList.unique(); // Removes Duplicates if sorted

    // myList.reverse();
    for(int val : myList)
    {
        cout<< val <<" ";
    } 
    return 0;
}