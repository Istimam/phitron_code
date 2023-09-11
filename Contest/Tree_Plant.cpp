#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin>>year;
    year--;
    if(year == 0)
    {
        cout<<pow(2,year);
    }
    else
    {   
        long long int trees = pow(2,year) * pow(2,year-1);
        cout<<trees<<endl;
    }
    return 0;
}