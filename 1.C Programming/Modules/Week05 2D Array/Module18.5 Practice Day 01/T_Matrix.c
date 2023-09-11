#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int diagonal_1_sum=0,diagonal_2_sum=0;  
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<=i;j++)
        {
            diagonal_1_sum=diagonal_1_sum+arr[i][j];
            // printf("%d\n",arr[i][j]);

        }
    }
    int j=n-1;
    for(int i=0;i<n;i++)
    {
        {
            diagonal_2_sum=diagonal_2_sum+arr[i][j];
        // printf("%d\n",arr[i][j]);
        j--;
        }
    }
    // printf("%d %d\n",diagonal_1_sum,diagonal_2_sum);
    printf("%d\n",abs(diagonal_1_sum-diagonal_2_sum));
    return 0;
}