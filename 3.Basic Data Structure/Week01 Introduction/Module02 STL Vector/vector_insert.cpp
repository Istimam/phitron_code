#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,23,4,5,5};
    /*Insert a specefic value*/
    // v.insert(v.begin()+2,100);
    /*Inser a vector*/
    vector<int>v2={25,34,56};
    v.insert(v.begin()+2,v2.begin(),v2.end());
    for(int x:v) //Range Based for loop
    {
        cout<<x<<" ";
    }

    return 0;
}