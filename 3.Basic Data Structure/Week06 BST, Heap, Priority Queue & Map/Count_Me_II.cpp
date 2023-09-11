#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        map<int, int> frequency;
        for (int num : A)
        {
            frequency[num]++;
        }

        priority_queue<pair<int, int>> pq;
        for (auto element : frequency)
        {
            pq.push({element.second, element.first});
        }

        int maxNumber = pq.top().second;
        int maxCount = pq.top().first;

        pq.pop();
        while (!pq.empty() && pq.top().first == maxCount)
        {
            maxNumber = max(maxNumber, pq.top().second);
            pq.pop();
        }

        cout << maxNumber << " " << maxCount << endl;
    }

    return 0;
}
