#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int pos,value,i;
    scanf("%d",&pos);
    for(int i=pos-1;i<n;i++)
    {
        ar[i]=ar[i+1];
      
    }
    for(int i=0;i<=n-2;i++)
    {
        printf("%d ",ar[i]);
    }   
    return 0;
}