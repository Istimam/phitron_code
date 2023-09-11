#include<stdio.h>
int main()
{
    int s,m;
    scanf("%d %d",&s,&m);
    int arr[s];
    for(int i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }

    int count[100001]={0};
    for(int i=0;i<s;i++)
    {
        int v=arr[i];
        count[v]++;

    }
    for(int i=1;i<=m;i++)
    {
    printf("%d\n",count[i]);

    }
    return 0;
}