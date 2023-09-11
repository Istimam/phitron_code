#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        long long int sum,A,B,C;
        scanf("%lli %lli %lli %lli",&sum,&A,&B,&C);
        long long int missing_number;
        missing_number=sum-(A+B+C);
        printf("%lli",missing_number);
        printf("\n");
    }

    return 0;
}