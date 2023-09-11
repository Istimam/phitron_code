#include<stdio.h>
void fun(int x)
{
    x=100; /*eta fun() er variable*/
    printf("fun x er address - %p\n",&x);
    printf("fun x er value - %d\n",x);
}
int main(int x)
{
    // int x;
    x=10; /*eta main() er varible*/
    printf("main x er address - %p\n",&x);
    printf("main x er value - %d\n",x);
    fun(x); /*x er value call kora hoyese*/

    return 0;
}