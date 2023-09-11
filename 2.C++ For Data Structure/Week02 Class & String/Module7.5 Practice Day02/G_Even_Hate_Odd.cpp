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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int even=0,odd=0;
        if(n%2==0)
        {
            for (int f = 0; f < n; f++)
            {
                if(arr[f]%2==0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }      
            if(even==odd)
            {
                cout<<0<<endl;
            }
            else if(even<odd)
            {
                cout<<(n/2)-even<<endl;
            }
            else
            {
                cout<<(n/2)-odd<<endl;
            }    
        }
        else
        {
            cout<<-1<<endl;
        }    
        
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int testcase;
//     cin>>testcase;
//     for (int test = 0; test < testcase; test++)
//     {   
        
//         int n;
//         cin>>n;
//         if(n%2==1)
//         {
//             cout<<-1<<endl;
//         }
//         else
//         {
//             int arr[n];
//             int even=0,odd=0;
//             for (int i = 0; i < n; i++)
//             {
//                 cin>>arr[i];
//                 if(arr[i]%2==0)
//                 {
//                     even++;
//                 }
//                 else
//                 {
//                     odd++;
//                 }
//             }
//             if((n/2)==odd)
//             {
//                 cout<<0<<endl;
//             }
//             else if((n/2)>odd)
//             {
//                 cout<<(n/2)-odd<<endl;
//             }
//             else
//             cout<<(n/2)-even<<endl;    
//         }
//     }
//     return 0;
// }