// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     /*Replace*/
//     vector<int>v={1,2,3,4,5,10,6,6,78,8,9};
//     replace(v.begin(),v.begin()+5,1,7);
//     for(int x:v)
//     {
//         cout<<x<<" ";
//     }
//     return 0;

//     /*Find*/
// //     vector<int>v={1,2,3,4,5,10,6,6,78,8,9,};
// //     auto it = find(v.begin(),v.end(),7);
// //     if(it == v.end()) cout<<"Not Found";
// // else cout<<"Found";
// //     for(int x:v)
// //     {
// //         cout<<x<<" ";
// //     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v1(n);
//     // int a1[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>v1[i];
//     }
//     int m;
//     cin>>m;
//     // int a2[m];
//     vector<int> v2(m);
//     for (int i = 0; i < m; i++)
//     {
//         cin>>v2[i];
//     }
//     int index;
//     cin>>index;
//     v1.insert(v1.begin()+index,v2.begin(),v2.end());
//     for(int i=0; i< v1.size();i++)
//     {
//         cout<<v1[i]<<" ";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v1(n);
    // int a1[n];
    for (int i = 0; i < n; i++)
    {
        cin>>v1[i];
    }
    int m;
    cin>>m;
    // int a2[m];
    vector<int> v2(m);
    for (int i = 0; i < m; i++)
    {
        cin>>v2[i];
    }
    int index;
    cin>>index;
    vector<int> v3(n+m,0);
    v3=v1;
    // for (int i = 0; i < m; i++)
    // {
    //     replace(v3.begin()+index,v3.begin()+(n+1),v3[m+i],v2[i]);
    // }
    // for (int i = 6; i < 8; i++)
    // {
    //     replace(v3.begin(),v3.end(),v3[i],v2[0]);
    // }
    for (int i = index, j = 0; j < m && i < n + m; i++, j++)
    {
        v3[i] = v2[j];
    }
    for(int i=0;i<m+n;i++)
    {
        cout<<v3[i]<<" ";
    }
    return 0;
}