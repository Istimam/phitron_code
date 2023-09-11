#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x;
    cin>>x>>n;
    long long int sum = 0;
    for (int i = 2; i <= n; i+=2)
    {
        sum += pow(x,i);
    }
    
    cout<<sum<<endl;
    return 0;
}