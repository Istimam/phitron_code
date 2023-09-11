#include<stdio.h>
int main()
{
    int ar[5]={10,20,39,40,50};
    // printf("0th index address %p\n",&ar[0]);
    // printf("0th index address %p\n",&ar);
    
    // /*printing array value by Dereferencing*/
    // printf("0th index vlaue %d\n",ar[0]);
    // printf("0th index value %d\n",*ar);
    
    // /*Syntax of printing array value by dereferencing*/
    // printf("1th index value %d\n",ar[1]);
    // printf("1th index value %d\n",*(ar+1));

    /*Bug or magic*/
    /*Traditional*/
    printf("ar[1] index - %d\n",ar[1]);
    printf("*(ar+1) index - %d\n\n",*(ar+1));
    /*Non traditional*/
    printf("1[ar] index - %d\n",1[ar]);
    printf("*(1+ar) index - %d\n",*(1+ar));

    
    return 0;
}