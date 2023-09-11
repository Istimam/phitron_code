/*Time limit exeeds*/
// #include<stdio.h>
// int main()
// {
//     int n,flag=0;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=0, j=n-1;i<=j;i++,j--)
//     {
//         if(a[j]==a[i])
//         {
//             flag=1;
//         }
//         else
//         flag=0;
//     }
//     if(flag==1)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }
//     return(0);
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int i=0,j=n-1,is_palindrome=0;
//     while (i<j)
//     {
//         if(arr[i] != arr[j])
//         {
//             is_palindrome++;
//         }
//         i++;
//         j--;
//     }

//     if(is_palindrome != 0)
//     {
//         printf("NO\n");
//     }
//     else
//     {
//         printf("YES");
//     }
    
//     return 0;
// }
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    int flag=0;
    for(int i=0, j=n-1;i<j;i++,j--)
    {
        if(a[j] != a[i])
        {
            flag++;
        }
        
    }
    if(flag != 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return(0);
}