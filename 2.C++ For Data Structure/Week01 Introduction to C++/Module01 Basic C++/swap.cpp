#include<iostream>
#include<utility>
using namespace std;
// void my_swap(int *a,int *b)
// {
//     /*call by reference*/
//     int tmp=*a;
//     *a=*b;
//     *b=tmp;
// }

int main()
{
    int a,b;
    cin>>a>>b;
    /*swap with user-defined func*/
    // my_swap(&a,&b);

    /*swap using buil-in func*/
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}