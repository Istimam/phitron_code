#include<stdio.h>
void fun(int *p) /*jehetu adddress niye direct kaj krtesi amder int keno declare krtesi*/
{
    *p=50;
}
int main()
{
    int x=10;
    printf("%d\n",x);/*Eta main x er value print krbe*/
    fun(&x);
    printf("%d\n",x);/*fun() e giye update hoye ashce tai updated value print hbe*/
    return 0;
}