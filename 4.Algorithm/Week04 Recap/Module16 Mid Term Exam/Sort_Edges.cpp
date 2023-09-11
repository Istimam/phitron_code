#include<bits/stdc++.h>
using namespace std;
bool edgeCompare(pair<int,int> e1,pair<int,int> e2)
{
    if(e1.first != e2.first)
    {
        return e1.first < e2.first;
    }
    return e1.second < e2.second;
}
int main()
{
    int e;
    cin >> e;
    vector<pair<int, int>> edges(e);
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> edges[i].first >> edges[i].second;
    }
    sort(edges.begin(), edges.end(), edgeCompare);
    for(auto v:edges)
    {
        cout << v.first << " " << v.second << endl;
    }
    return 0;
}