#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int x,flag=0;  
    scanf("%d",&x);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(x==arr[i][j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag!=0)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }
    return 0;
}