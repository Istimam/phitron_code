#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col]; 
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int times=a[0][0];
    int j=0,count=0;
    if(row==col)
    {
        for(int i=0;i<row;i++)
        {
            if(a[i][j]==times)
            {
                count++;
            }
            j++;
        }
        printf("Diagonal");
        return 0;       
    }
    else
    {
        printf("Not Square Matrix");
    }

    // printf("%d",times);
    return 0;
}