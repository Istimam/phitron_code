#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int times=row*col;
    int a[row][col]; 
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int count=0;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]==0)
            {
                count++;
            }
            // printf("%d ",a[i][j]);
        }
        // printf("\n");
    }
    if(count==times)
    {
        printf("Null Matrix");
    }
    else
    {
        printf("Not null matrix");
    }    
    return 0;
}