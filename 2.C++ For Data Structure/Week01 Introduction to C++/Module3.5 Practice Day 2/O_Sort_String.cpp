#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,count [26]={0};
    cin>>m;
    for (int i = 1; i <= m; i++)
    {
        char s;
        cin>>s;
        int value=s-'a';
        count[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        char j=i+'a';
        while (count[i]!=0)
        {
            cout<<j;
            count[i]--;
        }
        
    }    
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char s[1000];
//     cin.getline(s,1000);
//     int stl=strlen(s);
//     sort(s,s+stl);/*Accending*/
//     cout<<s<<endl;
//     sort(s,s+stl,greater<char>());/*Decending*/
//     cout<<s<<endl;
//     return 0;
// }