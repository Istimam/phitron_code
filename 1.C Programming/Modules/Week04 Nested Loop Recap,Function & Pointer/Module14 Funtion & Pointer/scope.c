#include<stdio.h>
/*Global Declaration*/
int x=500;
void fun(void)
{
    /*block er modde s local variable*/
    int s=100;
    // printf("Fun er s er address - %p\n",&s);   
    printf("%d\n",x);
}
int main()
{
    int s=200;    
    // printf("Main er s er address - %p\n",&s);
    printf("%d\n",x);
    fun();
    return 0;
}