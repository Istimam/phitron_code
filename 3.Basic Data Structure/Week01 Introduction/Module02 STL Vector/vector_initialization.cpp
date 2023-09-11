#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*Type 01*/
    // vector<int> v;
    /*Type 02*/
    // vector<int> v(5);
    /*Type 03*/
    // vector<int> v(5,100);
    /*Type 04*/
    // vector<int> v2(5,4);
    // vector<int> v(v2);
    // /*Type 05*/
    int a[4]={1,3,4,2};
    vector<int> v(a,a+4);
    /*Type 06*/
    // vector<int> v={2,14,3};
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[3]<<" ";
    }
    cout<<endl;
    cout<<v.size();
    return 0;
}