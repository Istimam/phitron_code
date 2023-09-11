#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        a = a % 100;
        b = b % 100;
        long long mul = a * b;
        // int lastTwoDigits = (mul % 100 + 100) % 100;
        cout << mul%100 << endl;
    }
    return 0;
}
