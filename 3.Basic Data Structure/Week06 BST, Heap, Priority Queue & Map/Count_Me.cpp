#include <bits/stdc++.h>
using namespace std;

void mostFrequentWord(string s)
{
    stringstream ss(s);
    string word;
    map<string, int> wordFrequency;
    string mostFrequent = "";
    int maxCount = 0;

    while (ss >> word)
    {
        if (!word.empty())
        {
            wordFrequency[word]++;
            if (wordFrequency[word] > maxCount)
            {
                mostFrequent = word;
                maxCount = wordFrequency[word];
            }
        }
    }

    cout << mostFrequent << " " << maxCount << endl;
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string S;
        getline(cin, S);

        mostFrequentWord(S);
    }

    return 0;
}
