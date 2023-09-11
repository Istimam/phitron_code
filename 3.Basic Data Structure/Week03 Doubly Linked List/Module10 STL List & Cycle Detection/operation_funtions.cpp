#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10,20,10,3,1,33,12};
    // myList.remove(10); // Removes every occourences of 10 
    
    // sort(myList.begin(), myList.end(),greater<int> ()); // This is for vector
    // myList.sort(); // Accending
    // myList.sort(greater<int>()); //Deccending

    // myList.sort(); // Accending
    // myList.unique(); // Removes Duplicates if sorted

    myList.reverse();
    for(int val : myList)
    {
        cout<< val <<endl;
    } 
    return 0;
}