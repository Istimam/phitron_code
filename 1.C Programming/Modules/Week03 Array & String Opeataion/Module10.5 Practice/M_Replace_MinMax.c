#include<stdio.h>
#include<limits.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN,min=INT_MAX,smax,smin;
     for(int i=0;i<a;i++)
     {
        if (max<arr[i])
        {
            max=arr[i];
            smax=i;
        }
        if (min>arr[i])
        {
            min=arr[i];
            smin=i;
        }
     }
    int swap=0;
    swap=arr[smax];
    arr[smax]=arr[smin];
    arr[smin]=swap;
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
      
    return 0;
}

// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int a,b,max=INT_MIN,min=INT_MAX;
//     scanf("%d",&a);
//     for(int i=0;i<a;i++)
//     {   
//         scanf("%d",&b);
//         if(max<b)
//         {
//             max=b;
//         }
//         else
//         {
//             min=b;
//         }
    
//     }
//     printf("%d %d",max,min);
//     return 0;
// }