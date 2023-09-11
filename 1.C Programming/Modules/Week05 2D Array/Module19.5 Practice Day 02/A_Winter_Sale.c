#include<stdio.h>
#include<math.h>
int main()
{
    int percentage,discounted_price;
    scanf("%d %d",&percentage,&discounted_price);
    float p=percentage/100.0;
    float price=discounted_price/(1-p);
    printf("%0.2f",price);
    return 0;
}
// #include <stdio.h>
// #include <math.h>

// int main() {
//     int x, p;
//     // double original_price;

//     scanf("%d %d", &x, &p);

    
//     double original_price = p / (1 - (x / 100.0));
//     original_price = ceil(original_price * 100) / 100; // round up to two decimal places

//     printf("%.2f", original_price);

//     return 0;
// }
