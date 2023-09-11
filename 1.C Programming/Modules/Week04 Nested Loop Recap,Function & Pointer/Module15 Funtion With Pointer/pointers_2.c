#include<stdio.h>
int main()
{
    double x=5.35;
    double *ptr = &x;
    double *ptr2 = ptr; /*ptr & *ptr2 same value kei point kortese*/
    // *ptr = 10.50;
    *ptr2 = 10.50;
    printf("x er value - %0.2lf\n",x);
    printf("*ptr er value - %0.2lf\n",*ptr);
    printf("*ptr2 er value - %0.2lf\n",*ptr);
    printf("x er size - %d\n",sizeof(x));

    return 0;
}