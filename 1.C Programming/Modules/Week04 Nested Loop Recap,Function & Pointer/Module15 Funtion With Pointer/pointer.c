#include<stdio.h>
int main()
{
    int x=100;
    int *ptr = &x;
    printf("x er address - %p\n",&x);
    printf("x er value - %d\n",x);
    printf("ptr er value - %p\n",ptr);
    printf("ptr er address - %p\n",&ptr);
    printf("ptr er memory size - %d\n",sizeof(ptr));
    printf("x er memory size - %d\n",sizeof(x));

    /*Deereference*/
    // x=200; lekhe and *ptr=200; same kotha
    *ptr=200;
    printf("x er value - %d\n",x);
    printf("x er value - %d\n",*ptr);

    return 0;
}