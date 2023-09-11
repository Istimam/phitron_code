#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int ar[n];//variable sized array & we can't initialize ar[n]={0};
    //int ar[5];//fixed sized array & we can initialize ar[5]={0,1,2,3,4}
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=n-1;i>=0;i=i-2)   
    {
        printf("%d\n",ar[i]);
    }
    

    return 0;
}