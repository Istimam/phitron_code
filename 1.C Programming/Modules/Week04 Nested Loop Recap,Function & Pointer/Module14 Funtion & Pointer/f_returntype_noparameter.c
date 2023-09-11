#include<stdio.h>
int sum()
// int sum(void)
{
    // value input near jonno scanf nite hbe
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    return s; 
}
int main()
{
    // parameter na dile main() e input neya jabe na
    int s=sum(); //void dile sum(too many argument errr ashbe)
                //   int s=sum(100);
    printf("%d",s);
    return 0;
}