#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for (int s = 0; s < test; s++)
    {
        int n;
        char c;
        cin>>n>>c;
        for (int i = 0; i < n; i++)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}