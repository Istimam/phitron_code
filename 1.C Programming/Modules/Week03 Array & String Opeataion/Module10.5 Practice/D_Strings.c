#include<stdio.h>
#include<string.h>
int main()
{
    char A[11],B[11];
    char A[10],B[10];
    scanf("%s %s",&A,B);
    // gets(A);
    // gets(B);
    printf("%d %d\n%s%s\n",strlen(A),strlen(B),A,B);

    char swap=A[0];
        A[0]=B[0];
        B[0]=swap;

    printf("%s %s\n",A,B);
    // printf("%d %d\n%s%s",strlen(A),strlen(B),A,B);
    return 0;
}
