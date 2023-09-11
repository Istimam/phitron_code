// #include<stdio.h>
// int main()
// {
//     int T;
//     scanf("%d",&T);
//     int unit[T][T];
//     for(int i=0;i<T;i++)
//     {
//         for(int j=0;j<T;j++)
//         {
//             scanf("%d",&unit[i][j]);
//         }
//     }

//     int flag=1,check=unit[0][0];
//     for(int i=0;i<T;i++)
//     {
//         for(int j=0;j<T;j++)
//         {
//             if( i==j && unit[i][j]!=check)
//             {
//                 flag=0;
//                 break;
//             }               
//             else if(i!=j && unit[i][j]!=0)
//             {
//                 flag=0;
//                 break;
//             }
//         }
        
//     }
//     if(flag==1)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int unit[T][T];
    for(int i=0;i<T;i++)
    {
        for(int j=0;j<T;j++)
        {
            scanf("%d",&unit[i][j]);
        }
    }

    int flag=1,check=1;
    for(int i=0;i<T;i++)
    {
        for(int j=i;j<i+1;j++)
        {
            if(unit[i][j]!=check)
            {
                flag=0;
                break;
            }     
        }
        for (int j = 0; j < T; j++)
        {
            if(i!=j && unit[i][j]!=0)
            {
                flag=0;
                break;
            }
        }
        
    }
    if(flag==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}