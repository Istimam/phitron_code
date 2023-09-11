#include<stdio.h>
int main()
{
    int army_personal;
    scanf("%d",&army_personal);
    int age[army_personal];
    for (int i = 0; i < army_personal; i++)
    {
        scanf("%d",&age[i]);
    }

    for(int i=0;i<army_personal-1;i++)
    {
        for(int j=i+1;j<army_personal;j++)
        {
            if(age[i]<age[j])
            {
                int temp=age[i];
                age[i]=age[j];
                age[j]=temp;
            }
        }
    }
    if(army_personal%2==0)
    {
        printf("%d %d",age[army_personal/2],age[(army_personal/2)-1]);
    }
    else
    {
        printf("%d",age[army_personal/2]);
    }
    
    return 0;
}