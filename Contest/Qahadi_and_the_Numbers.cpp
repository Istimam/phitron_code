#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int r = 0;
        map<int, int> freq;
        cin >> n;
        while (n--)
        {
            int val;
            cin >> val;
            if (freq.find(val) != freq.end())
            {
                r++;
                freq[val]++;
            }
            else
            {
                freq[val] = 1;
            }
        }
        cout << r << endl;
    }

    return 0;
}
