#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // int di = (n+1)/2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i==(n+1)/2 && j==(n+1)/2)
            {
                cout<<"X";
            }
            else if(i==j)
            {
                cout<<"\\";
            }
            else if((i+j)-1==n)
            {
                cout<<"/";
            }
            else
            {
                cout<<" ";
            }
        }
        if(i <= n)
        cout<<endl;
    }
    
    return 0;
}