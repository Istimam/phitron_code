// #include<stdio.h>
// int main()
// {
    // int A,B,sum;
    // scanf("%i %i",&A,&B);
    // sum=A+B;
    // printf("%d",sum);
// return 0;
// }
// #include<stdio.h>
// int main() 
// {
    // int A,B;
    // scanf("%i\n%i",&A,&B);
    // int sum=A+B; 
    // printf("%d",sum);  
    // return 0;
// }
// #include<stdio.h>
// int main()
// {
    // int n,i;
    // scanf("%i",&n);
    // if(n<=1000)
    // for (i=1;i<=n;i++)
    // {
        // printf("I Love Practice\n");
    // }
    // return 0;
// 
// }
// #include<stdio.h>
// int main()
// {
    // int A;
    // long int B;
    // float C;
    // char D;
    // scanf("%i\n%li\n%f\n%c",&A,&B,&C,&D);
    // printf("%i\n%li\n%0.2f\n%c",A,B,C,D);
    // 
    // return 0;
// 
// }
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%i",&n);
    
    
        for(i=1;i<=n;i++)
        if(i % 5==0) //if(i%d)the program will print "Yes" whenever the remainder is non-zero
        {
            printf("%d Yes\n",i);
        }
        else
        {
            printf("%d No\n",i);
        }
    

    return 0;
}
