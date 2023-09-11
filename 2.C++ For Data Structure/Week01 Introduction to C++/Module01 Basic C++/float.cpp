#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a;
    cin>>a;
    /*All number after decimal shows*/
    // cout<<a;
    /*Manupulation to get fixed number*/
    cout<<fixed<<setprecision(2)<<a;


    return 0;
}