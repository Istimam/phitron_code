#include<stdio.h>
#include<limits.h>
int max_min(int a[],int n)
{
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        /*If the first value is the min then it won't come to this condition */
        // else if(a[i]<min)
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d %d",min,max);

}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max_min(arr,n);
    return 0;
}