#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    /*Spaced string Input in C*/
    // fgets(s,100,stdin);/*Takes with Enter*/

    /*Spaced string Input in C++*/
    cin.getline(s,100);/*Takes without Enter*/
    cout<<strlen(s);
    return 0;
}