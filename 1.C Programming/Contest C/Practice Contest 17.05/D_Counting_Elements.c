#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int limit[1000] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        limit[a[i]]++;
    }
    // sort(a,a+n);
    int cnt = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int f = i+1; f < n; f++)
        {
            if(a[i] == a[i+1])
            {
                // int temp = a[i];
                // a[i] = a[f];
                // a[f] = temp;
                cnt++;
            }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d",a[i]);
    // }
    printf("%d",limit[5]);
    return 0;
}