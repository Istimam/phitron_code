#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int f;
    scanf("%d",&f);
    int comp=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==f)
        {
            comp++;
        }
    }
    printf("%d",comp);

    return 0;
}