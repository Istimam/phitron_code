#include<stdio.h>
int main()
{
    int a,belt=20000,bag=10000,remain,You_have;
    scanf("%d",a);
    if(a>=10000)
    {
        printf("Gucci Bag\n");
        remain=a-bag;
        if(remain>=20000)
        {
            printf("Gucci Belt\n");
            You_have=remain-belt;
            printf("You_have %d",You_have); 

        }
        printf("You_have %d",remain); 
        
    }
    else if (a>5000)
        {  remain=a-bag;
           printf("Levis Bag\nYou Have:%d",remain);
        }
    else (a<=0);
        {
            printf("something\nYou Have:%d",a);
        }

    return 0;
}
// #include<stdio.h>
// int main()
// {
    // int a,belt=20000,bag=10000,remain,You_have;
    // scanf("%d",&a);
    // if(a>=10000)
    // {
        // printf("Gucci Bag\n");
        // remain=a-bag;
        // if(remain>=20000)
        // {
            // printf("Gucci Belt\n");
            // You_have=remain-belt;
            // printf("You_have %d",You_have); 
        // }
        // else
        // {
            // printf("You_have %d",remain); 
        // }
    // }
    // else if (a>5000)
    // {
        // printf("Levis Bag");
        // You_have=a-bag;
        // printf("You_have %d",You_have); 
    // }
    // else if(a<=0)
    // printf("Empty");
    // else 
    // printf("something");
    // return 0;
// }
// 