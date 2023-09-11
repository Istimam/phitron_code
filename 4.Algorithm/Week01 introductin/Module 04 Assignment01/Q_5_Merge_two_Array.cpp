#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int sz1, int arr2[], int sz2, int ar3[])
{
    int i = 0, j = 0, k = 0;

    while (i < sz1 && j < sz2)
    {
        if (arr[i] >= arr2[j])
        {
            ar3[k] = arr[i];
            i++;
        }
        else
        {
            ar3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < sz1)
    {
        ar3[k] = arr[i];
        i++;
        k++;
    }

    while (j < sz2)
    {
        ar3[k] = arr2[j];
        j++;
        k++;
    }
}

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int o;
    cin >> o;
    int ar2[o];
    for (int i = 0; i < o; i++)
    {
        cin >> ar2[i];
    }

    int ar3[n + o];
    merge(ar, n, ar2, o, ar3);

    for (int i = 0; i < n+o; i++)
    {
        cout << ar3[i] << " ";
    }
    return 0;
}