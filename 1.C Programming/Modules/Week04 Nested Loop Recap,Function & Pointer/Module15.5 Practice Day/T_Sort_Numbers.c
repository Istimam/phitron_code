#include<stdio.h>
int sort_ascending(int a[])
{
    for(int i=0;i<2;i++)
    {
        for(int j=1;j<3;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0;i<3;i++)
    {
        printf("%d\n",a[i]);
    }

}
int main()
{
    int a[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[3];
    for(int i=0;i<3;i++)
    {
        b[i]=a[i];
    }
    sort_ascending(a);
    printf("\n");
    for(int i=0;i<3;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}