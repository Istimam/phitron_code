#include<bits/stdc++.h>
using namespace std;
int* get_array(int x)
{
    int *arr = new int[x];
    for (int i = 0; i < x; i++)
    {
        cin>>arr[i];
    }
    return arr;
}
int main()
{
    int n;
    cin>>n;
    int *arr = get_array(n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}