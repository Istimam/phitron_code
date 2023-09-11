#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    for (int test = 0; test < testcase; test++)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int tem = a[0],flag = 1;
        for (int i = 1; i < n; i++)
        {
            if(tem > a[i])
            {
                flag=0;
            }
            else
            {
                tem = a[i];
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }    
    return 0;
}