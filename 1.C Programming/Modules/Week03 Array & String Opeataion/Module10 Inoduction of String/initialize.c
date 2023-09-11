#include<stdio.h>
int main()
{
    // char a[5]={'R','a','h','a','t'}; //no gurantee je Null bose jabe size bariye dile
    char a[5]="Rahat"; //special power of an string array
    for(int i=0;i<5;i++)
    {
        printf("%c\n",a[i]);
    }
    return 0;
}