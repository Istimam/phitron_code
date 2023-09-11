#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int k = 1; k <= n; k++)
    {
        string a,b;
        cin>>a>>b;
        int c = b.size();
        while (a.find(b)!=-1)
        {
            a.replace(a.find(b),c,"$");
        }
        cout<<a<<endl;
    }
    return 0;
}