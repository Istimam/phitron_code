#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
    fgets(s,1000001,stdin);
    
    int i=0;
    // int count=0;
    while (s[i]!='\\')
    {
        // count++;
        printf("%c",s[i]);
        // printf("%s",s[i]);
        //  the difference between the two lines of code is the format 
        // specifier used (%c vs %s) and the argument type passed 
        // (s[i] as a single character vs s[i] as a pointer to a character array). 
        //  It's important to use the correct format specifier and argument type in printf() 
        // to avoid undefined behavior and ensure correct output. 

        i++;
    }
    // for(int i=0;i<=count;i++)
    // {
    //     printf("%s",count);
    // }

    
    return 0;
}