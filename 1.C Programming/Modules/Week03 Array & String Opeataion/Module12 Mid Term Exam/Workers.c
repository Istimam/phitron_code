#include<stdio.h>
int main()
{
    int m,m1,d;
    scanf("%d %d %d",&m,&m1,&d);
    int work=m*d;
    int days= work/m1;
    printf("%d",days);
    return 0;
}

// #include <stdio.h>

// int main() {
//     int M1, D, M2;
//     scanf("%d", &M1);
//     scanf("%d", &D);
//     scanf("%d", &M2);

//     int days = (M1 * D) / M2;
//     printf("%d\n", days);

//     return 0;
// }


