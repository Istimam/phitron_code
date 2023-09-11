#include <stdio.h>

int main()
{
    char Al,small,capital;
    scanf("%c",&Al);
    if (Al<=96)
    {
        capital=Al+32;
        printf("%c",capital);
    }
    else
    small=Al-32;
    printf("%c",small);

    return 0;
}

