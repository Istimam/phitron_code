// #include<stdio.h>
// #include<string.h> //string related function gulo thake
// int main()
// {
//     char a[12]; // input er theke kom nea jabe na print korbe only winndows e
//                 // size beshi dile problem nai cz input shesh hole automatically NULL niye ney 
//     gets(a); // built in function; header file use korte hbe
//     printf("%s",a); //ebar space shoho print korbe
//     return 0;
// }

#include<stdio.h>
int main()
{
    char a[18];
    fgets(a,14,stdin); //header file chara run krlo kno
    a[11]='\0'; //null enter er ghore die disi tai input end
    printf("%s",a);
    return 0;
}