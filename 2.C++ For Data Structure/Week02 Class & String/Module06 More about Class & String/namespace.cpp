#include<bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age1=24;
    void hello()
    {
        cout<<"Rakib namespace";
    }
    class R
    {

    };
}
namespace Sakib
{
    int age2=24;
    void hello()
    {
        cout<<"Rakib namespace";
    }
    class R
    {
        
    };
}
using namespace Rakib;
int main()
{
    cout<<age1<<endl;
    return 0;
}