#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int s,pos;
    //int pos=-1; 
    scanf("%d",&s);
    
    for(int i=0;i<n;i++)
    {
        if(s==ar[i])
        {
            pos=i;
            break;    
        }
        //ei part lagbe na first declare krle
        else
        {
            pos=-1;
        }

    }
    printf("%d",pos);
    return 0;
}