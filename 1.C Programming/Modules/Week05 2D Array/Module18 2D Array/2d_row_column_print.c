#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0; j<col;j++)
        {
            scanf("%d",&a[i][j]); /*Input*/
        }
    }
    int e;
    scanf("%d",&e);/*Row or Column Input*/

        // for(int i=0; i<row;i++)/*Printing Row*/
        // {
        //     printf("%d\n",a[i][e-1]);
        // }
    
        for(int j=0; j<col;j++)/*Printing col*/
        {
            printf("%d ",a[e-1][j]);
        }
        printf("\n");
    
    return 0;
}