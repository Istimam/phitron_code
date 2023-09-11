#include<stdio.h>
void solve(int a[],int i,int size)
{

  if(i==size) return;
  solve(a[i],i+1,size);
  printf("%d ",a[i]);
}
int main()
{
  int sz;
  scanf("%d",&sz);
  int arr[sz];
  for(int i=0;i<sz;i++)
  {
    scanf("%d",&arr[i]);
  }
  solve(arr,0,sz); 
    return 0;
}