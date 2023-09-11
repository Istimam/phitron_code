#include<stdio.h>
void fun(int *ar,int n) /*int ar mane pure array of adress of ar[0]*/
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
        // printf("%d ",*(ar+i));
        
    }
    /*main() array size ber kora jay na built in function theke karon ar mane ar[0]*/
    // int sz=sizeof(ar)/sizeof(int);
    // printf("%d\n",sz);
}
int main()
{
    int ar[5]={20,25,25,24,21};
    fun(ar,5);
    return 0;
}

/*For double*/

// #include<stdio.h>
// void fun(double *ar,int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         printf("%0.2lf ",ar[i]);
//     }
// }
// int main()
// {
//     double ar[5]={3.3,21.3,23.1,34.4,53.2};
//     fun(ar,5);
//     return 0;
// }