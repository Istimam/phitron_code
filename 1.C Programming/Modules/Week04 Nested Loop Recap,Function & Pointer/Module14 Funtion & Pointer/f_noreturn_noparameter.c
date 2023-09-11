#include<stdio.h>

// no_return No_parameter
void sum(void)
{
    /* input,kaj,output print all in this function as main() 
    dosent receive any return value*/
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    printf("%d\n",s);
}
int main()
{
    /*used main() only to call the sum()*/
    // Repeated use without writing the code for same operation
    sum();
    sum();
    sum();
    return 0;
}