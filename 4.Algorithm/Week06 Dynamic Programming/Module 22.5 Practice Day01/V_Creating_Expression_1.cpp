#include <bits/stdc++.h>
using namespace std;

bool knapsack(int n, int a[], int x, int s) {
    // Base case: If we have processed all elements
    if (n == 0) {
        if (s == x) {
            return true;
        }
        return false;
    }

    // Try including the current element with a '+' sign
    bool op1 = knapsack(n - 1, a, x, s + a[n - 1]);

    // Try including the current element with a '-' sign
    bool op2 = knapsack(n - 1, a, x, s - a[n - 1]);

    // Return true if either of the above options leads to a valid result
    return op1 || op2;
}

int main() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Check if it's possible to create the expression
    if (knapsack(n, a, x, a[0])) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
bool ans = false;
bool knapsack(int n,int a[],int x,int s)
{
    if(n == 0)
    {
        if(s == x)
        {
            return true;
        }
        return false;
    }
    // if(ans == false)
    // {
        //  return ;
        // return s;
        return knapsack(n - 1, a, x, s - a[n]) || knapsack(n - 1, a, x, s + a[n]);
        // return s;
    // }
    // int op1 = knapsack(n - 1, a, x, s - a[n-1]);
    // int op2 = knapsack(n - 1, a, x, s + a[n - 1]);
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
    if(knapsack(n, a, x, s))
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
