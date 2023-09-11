#include<stdio.h>
void increament(int *x)
{
    (*x)++;
    printf("The value of built in function - %d",*x);
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("The value of x in main() - %d\n",x);
    increament(&x);
    return 0;
}

#include<stdio.h>
void increament(int x)
{
    x++;
    printf("This is the value of built in function - %d",x);
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("This is the value of main() - %d\n",x);
    increament(x);
    return 0;
}