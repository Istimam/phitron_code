#include<stdio.h>
int main()
{
    char a[10]; //a[5] rahataaa dileo out= rahat ashhe
    scanf("%s",a);// evabe input er shomoy (rahat rahat) space dea jabe n, 
                  //dile space mane input end mne korbe 
    int sz=sizeof(a)/sizeof(char);
    printf("%s\n",a);
    printf("%d\n",sz);
    return 0;
}