#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);

    int letter[26]={0};
    for(int i=0;i<strlen(a);i++)
    {
        int value=a[i]-'a';
        letter[value]++;
    }
    /*For printing strings letter times*/
    // for(int i=0;i<strlen(a);i++)
    // {
    //     int value=a[i]-'a';
    //     printf("%c-%d\n",value+'a',letter[value]);
    // }
    
       for(int i=0;i<strlen(a);i++)
    {
        int value=a[i]-'a';
        if(letter[value]!=0)
        {
            printf("%c-%d\n",value+'a',letter[value]);
        }
        letter[value]=0;
    }

    // for(int i=0;i<27;i++) // To show how many times an alphabet leeters are present in one string
    // {
    //     if(letter[i]!=0)
    //     {
    //         printf("%c-%d\n",i+97,letter[i]);

    //     }
    // }
    return 0;
}