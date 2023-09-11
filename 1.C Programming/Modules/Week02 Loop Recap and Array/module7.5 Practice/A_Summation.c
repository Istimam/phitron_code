 #include<stdio.h>
 int main()
 {
    int n;
    scanf("%d",&n);
    int ar[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+ ar[i];
            // int sum = 0; // initialize sum to 0
            // for (int i = 0; i < size; i++) {
             // sum += array[i]; // accumulate values in sum
    }
    if(sum<0)
    {
    printf("%lld\n",sum*(-1));
    }
    else
    {
        printf("%lld\n",sum);
    }
     return 0;
 }