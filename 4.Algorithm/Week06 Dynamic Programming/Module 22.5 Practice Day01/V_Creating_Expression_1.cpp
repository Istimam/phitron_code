#include<bits/stdc++.h>
using namespace std;
bool ans = false;
bool knapsack(int n,int a[],int s,int x)
{
    if(n == 0)
    {
        if(s == x)
        {
            ans = true;
        }
        return false;
    }
    if(ans == false)
    {
        knapsack(n - 1, a, s, a[n-1] + x);
        knapsack(n - 1, a, s, a[n - 1] - x);
    }
}
int main()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x = 0;
    knapsack(n, a, s, x);
    if(ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}


// #include <iostream>
// #include <vector>
// using namespace std;
// bool canCreateExpression(int N, int X, vector<int>& A, int currentSum, int index) {
//     // Base case: If we have processed all elements in the array
//     if (index == N) {
//         // Check if the currentSum is equal to X
//         return currentSum == X;
//     }

//     // Try adding the current element with a '+' sign
//     if (canCreateExpression(N, X, A, currentSum + A[index], index + 1)) {
//         return true;
//     }

//     // Try subtracting the current element with a '-' sign
//     if (canCreateExpression(N, X, A, currentSum - A[index], index + 1)) {
//         return true;
//     }

//     // If neither '+' nor '-' sign works for this element, return false
//     return false;
// }

// int main() {
//     int N, X;
//     cin >> N >> X;
//     vector<int> A(N);

//     for (int i = 0; i < N; i++) {
//         cin >> A[i];
//     }

//     // Check if it's possible to create the expression
//     if (canCreateExpression(N, X, A, A[0], 1)) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }
