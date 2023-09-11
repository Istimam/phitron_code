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
        cin.ignore();
        string s;
        getline(cin,s);
        int let[26]={0};
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            if(let[s[i]-'A']==0)
            {
                sum=sum+2;
                let[s[i]-'A']++;
            }
            else if(let[s[i]-'A']!=0)
            {
                sum=sum+1;
            }
        }  
        cout<<sum<<endl;
    }
    return 0;
}