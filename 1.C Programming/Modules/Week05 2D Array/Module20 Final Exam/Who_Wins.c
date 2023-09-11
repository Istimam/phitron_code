#include<stdio.h>
int main()
{
    int round,sal=0,sha=0;
    scanf("%d",&round);
    for(int i=1;i<=round;i++)
    {
        int Tiger,Pathan;
        scanf("%d %d",&Tiger,&Pathan);
        if(Tiger>Pathan)
        {
            sal++;
        }
        if (Pathan>Tiger)
        {
            sha++;
        }
    }

    if(sal>sha)
    {
        printf("Tiger\n");
    }
    else if (sha>sal)
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }
    
    return 0;
}