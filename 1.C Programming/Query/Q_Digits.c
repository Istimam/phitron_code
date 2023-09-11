#include<stdio.h>
int main()
{
    int a,test_case;
    scanf("%d",&test_case);
    for(a=1;a<=test_case;a++)
    {
            int n;
    scanf("%d",&n);
    do
    {
        printf("%d ",n%10);
        n=n/10;
    }
    while(n!=0);
    printf("\n");
    }

    
    return 0; 
}
//want to print out 0 0 1