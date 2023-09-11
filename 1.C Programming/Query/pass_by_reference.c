#include<stdio.h>
void fun(int *p) /*jehetu adddress niye direct kaj krtesi amder int keno declare krtesi*/
{
    *p=50;
}
int main()
{
    int x=10;
    printf("%d\n",x);
    fun(&x);
    printf("%d\n",x);
    return 0;
}