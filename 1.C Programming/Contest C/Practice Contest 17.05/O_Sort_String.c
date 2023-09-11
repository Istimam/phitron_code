#include<stdio.h>
#include<string.h>
int main()
{
    int n,cnt[26]={0};
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++)
    {
        char l;
        scanf("%c",&l);
        int value=l-'a';
        cnt[value]++;
    }

    for(int i=0;i<26;i++)
    {
        while(cnt[i]!=0)
        {
            printf("%c",i+'a');
            cnt[i]--;
        }

    }
    return 0;
}
// When you enter the value of n and press the Enter key, a newline character ('\n') is left in the input buffer. The subsequent scanf function with %c format specifier reads this newline character as the first character in the loop.

// When you declare the loop as for(int i=1;i<=n+1;i++), it reads the newline character in the first iteration and then proceeds to read the remaining n characters as expected.

// However, when you declare the loop as for(int i=1;i<=n;i++), the newline character is not accounted for, and it consumes the first character you intended to input. As a result, the last input is skipped.

// To fix this issue, you can add a space before the %c format specifier in the scanf function, like this:

