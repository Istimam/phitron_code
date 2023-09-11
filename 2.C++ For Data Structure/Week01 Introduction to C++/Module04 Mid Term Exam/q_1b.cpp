#include<bits/stdc++.h>
using namespace std;
int* dynamic_array(int x)
{
    int* arr = new int[x];
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
    int* arr = dynamic_array(n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int* array_return(int x)
{
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin>>arr[x];
    }
    return arr;
}
int main()
{
    int n;
    cin>>n;
    int *arr = array_return(n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
