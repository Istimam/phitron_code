#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    string input;
    while (true)
    {
        getline(cin, input);
        if(input == "end") 
        {
            break;
        }
        string a;
        int b;
        istringstream iss(input);
        if(iss >> a >> b)
        {
            mp.insert({a, b});
        }
    }
    for (auto it = mp.begin(); it != mp.end();it++)
    {
        cout << it->first << " " << it->second << endl;
    }
        return 0;
}