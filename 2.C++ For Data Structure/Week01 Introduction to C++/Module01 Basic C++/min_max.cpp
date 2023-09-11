#include<iostream>
#include<algorithm>
using namespace std;
// int my_min(int x,int y)
// {
//     /*block chara 1ktaline print krte pare*/
//     /*Jekono conditon*/
//     if(x<y) return x;
//     else return y;
// }
// int my_max(int x,int y)
// {
//     if(x>y) return x;
//     else return y;
// }
int main()
{
    int a,b;
    cin>>a>>b;
    // int mn=my_min(a,b);
    // int mx=my_max(a,b);

    /*Built in function between two values*/
    // int mn=min(a,b);
    // cout<<mn<<endl;
    int mx=max(a,b);
    cout<<mx<<endl;
    return 0;
}