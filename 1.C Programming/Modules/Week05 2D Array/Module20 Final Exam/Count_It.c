#include<stdio.h>
#include<strings.h>
int main()
{
    char S[1002];
    fgets(S,1002,stdin);
    int len=strlen(S),small=0,capital=0,space=0;
    for(int i=0;i<len;i++)
    {
        if(S[i]>='a' && S[i]<='z')
        {
            small++;
        }
        else if (S[i]>='A' && S[i]<='Z')
        {
            capital++;
        }
        else if(S[i]==' ')
        {
            space++;
        }
        
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d\n",capital,small,space);
    return 0;
}