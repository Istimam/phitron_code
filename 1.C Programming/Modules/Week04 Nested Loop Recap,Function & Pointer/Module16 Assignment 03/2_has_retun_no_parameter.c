#include<stdio.h>
int sum_of_array()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
       
    }
    return sum;
}

int main()
{   
    int s= sum_of_array();
    printf("Sum of array is - %d",s);
    return 0;
}