#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for (int k = 1; k <= n; k++)
    {       
        string s;
        getline(cin,s);
        int sum1;
        int sum2;
        for (int i = 0; i < 6; i++)
        {
            sum1 = s[0]+s[1]+s[2];
            sum2 = s[3]+s[4]+s[5];
        }
        if(sum1==sum2)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}