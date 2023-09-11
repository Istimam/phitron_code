#include<stdio.h>
void fun(int *ar,int n)
{
    ar[0]=500;
    //  for(int i=0;i<5;i++)
    // {
    //     printf("%d ",ar[i]);
    // }
}
int main()
{
    int ar[5]={4,3,2,5,3};
    fun(ar,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}

/*string*/

// #include<stdio.h>
// void fun(char *ar)
// {
//     ar[0]='G';
// }
// int main()
// {
//     char ar[]="hello";
//     fun(ar);
//     printf("%s",ar);
//     return 0;
// }