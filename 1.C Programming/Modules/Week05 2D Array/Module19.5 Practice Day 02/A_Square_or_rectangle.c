#include<stdio.h>
int main()
{
    int testcase;
    scanf("%d",&testcase);
    int row,col;
    for(int i=1;i<=testcase;i++)
    {
        scanf("%d %d",&row,&col);
        if(row==col)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }
    return 0;
}