#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int pos,min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            pos=i+1;
        }
    }
    printf("%d %d\n",min,pos);
     
    return 0;
}


// #include<stdio.h>
// int main()
// {
//     int min,n,i,j;
//     scanf("%d",&n);

//     int arr[n];
//     for(i=0;i<n;i++)
//     {
//         scanf("%d ",&arr[i]);
//     }
//     min=arr[0];
//     j=1;          //to keep track of index num of first occurecnce take another variable
//     for(i=1;i<n;i++)
//     {
//         if(arr[i]<min)   //if we get minimum once then it dosen't matter how many times we get min value
//         {                //as it is less than
//             min=arr[i];
//             j=i+1;          //first time occurence
//             // j = i + 1; assigns the result of i + 1 to j, while j += i;(compound assignment statement"add and assign) updates the value of j by adding the value of i to its current value.    // 
//         }

//     }
//     printf("%d %d",min,j);
//     return 0;
// }
