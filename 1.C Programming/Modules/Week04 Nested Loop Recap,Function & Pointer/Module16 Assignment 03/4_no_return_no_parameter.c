#include<stdio.h>
void poem_verse()
{

    printf("Ami Tomay Valobashi!");
    
}

int main()
{
    int x;
    scanf("%d",&x);
    if(x==0 || x==1)
    {
        printf("Programming\n");
        poem_verse();
    }
    else
    {
        printf("Amar Shonar Bangla\n");
        poem_verse();

    }
    return 0;
}