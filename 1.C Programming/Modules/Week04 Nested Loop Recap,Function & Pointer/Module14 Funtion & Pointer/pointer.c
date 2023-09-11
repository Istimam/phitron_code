#include<stdio.h>
int main()
{
    int x=10;
    // address print krbe
    // printf("%d\n",&x);
    int* p=&x;
    // /*address print krbe*/
    // printf("%p\n",p);
    // /*DeReference*/
    // printf("%d\n",*p);
    // /*value change*/
    // p=30;
    // printf("%d\n",x); /*value change hbe na karon  p er value change hoyese*/
    *p=30;
    printf("%d\n",x); /*value change hoye gese*/
    return 0;
}
