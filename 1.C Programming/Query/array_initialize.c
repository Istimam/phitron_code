#include<stdio.h>
int main()
{
    int ar[]={1,2,3,4};
    //int ar[5]={1}; 
    // means it will assume the rest of the variable as zero|it's not garbege value
    for(int i=0;i<5;i++)
    {
        printf("%d\n",ar[i]);
        // output 0,1,2,3,4,4 ?
    }

    return 0;
}