#include<stdio.h>
void digit_print(int x)
{
    if(x==0) return; 
    int quotiont=x%10;
    // x=x/10;
    digit_print(x/10);
    printf("%d ",quotiont);   
}
int main()
{
    int n;
    scanf("%d\n",&n);
    int arr;
    for (int i = 1; i <=n; i++)
    {
        scanf("%d\n",&arr);
        if(arr==0)
        {
            printf("0\n");/*corner case (baki logic er moto kaj kore na)*/
        }
        else
        {
            digit_print(arr);
            printf("\n");   
        }
    }
    return 0;
}