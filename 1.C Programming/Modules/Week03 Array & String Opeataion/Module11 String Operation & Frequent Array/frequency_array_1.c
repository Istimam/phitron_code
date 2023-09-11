#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }

    int count[11]={0};
    for(int i=0;i<n;i++)
    {
        // int value= arr[i];
        // count[value]++;
        count[arr[i]]++;

    }
        // printf("0 - %d\n",count[0]);
        // printf("1 - %d\n",count[1]);
        // printf("2 - %d\n",count[2]);
        // printf("3 - %d\n",count[3]);
        // printf("4 - %d\n",count[4]);
        // printf("5 - %d\n",count[5]);    
    
    for(int i=0;i<11;i++)
    {   
        if(count[i]>0)
        {
        printf("%d - %d\n",i,count[i]);
        }
    }



    return 0;
}