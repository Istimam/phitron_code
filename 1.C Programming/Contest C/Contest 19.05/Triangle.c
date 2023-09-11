#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(A==0 && B==0 && C==0)
    {
        printf("No\n");
    }
    else if(A==B && A==C && B==C)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}