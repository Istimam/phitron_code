// #include <bits/stdc++.h>
// using namespace std;
// const int N = 105; // Adjust the maximum number of cities as needed

// vector<int> adj[N];
// bool visX[N], visY[N];
// int stepX[N], stepY[N];

// void bfs(int start, bool *vis, int *step)
// {
//     queue<int> q;
//     q.push(start);
//     vis[start] = true;
//     step[start] = 0;

//     while (!q.empty())
//     {
//         int curr = q.front();
//         q.pop();

//         for (int neighbor : adj[curr])
//         {
//             if (!vis[neighbor])
//             {
//                 q.push(neighbor);
//                 vis[neighbor] = true;
//                 step[neighbor] = step[curr] + 1;
//             }
//         }
//     }
// }

// int main()
// {
//     int n, e;
//     cin >> n >> e;

//     for (int i = 0; i < e; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         adj[a].push_back(b);
//         adj[b].push_back(a);
//     }

//     int X, Y, K;
//     cin >> X >> Y >> K;

//     bfs(X, visX, stepX);
//     bfs(Y, visY, stepY);

//     bool possible = false;

//     for (int i = 0; i < n; i++)
//     {
//         if (visX[i] && visY[i] && (stepX[i] + stepY[i] <= K) && ((K - stepX[i] - stepY[i]) % 2 == 0))
//         {
//             possible = true;
//             break;
//         }
//     }

//     if (possible)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <queue>

// using namespace std;

// const int MAX_N = 101;
// vector<int> adj[MAX_N];

// bool canReunite(int x, int y, int k) {
//     if (k < 0)
//         return false;
//     if (x == y)
//         return true;
//     if (k == 0)
//         return false;

//     queue<int> q;
//     vector<int> steps(MAX_N, -1);

//     q.push(x);
//     steps[x] = 0;

//     while (!q.empty()) {
//         int current = q.front();
//         q.pop();

//         for (int neighbor : adj[current]) {
//             if (steps[neighbor] == -1) {
//                 steps[neighbor] = steps[current] + 1;
//                 if (neighbor == y && steps[neighbor] <= k) {
//                     return true;
//                 }
//                 if (steps[neighbor] < k) {
//                     q.push(neighbor);
//                 }
//             }
//         }
//     }

//     return false;
// }

// int main() {
//     int N, E;
//     cin >> N >> E;

//     for (int i = 0; i < E; i++) {
//         int A, B;
//         cin >> A >> B;
//         adj[A].push_back(B);
//         adj[B].push_back(A); // Since the roads are two-way
//     }

//     int X, Y, K;
//     cin >> X >> Y >> K;

//     if (canReunite(X, Y, K)) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <queue>
// #include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
bool canReunite(int N, int E, const vector<pair<int, int>>& roads, int X, int Y, int K) 
{
    vector<vector<int>> graph(N);
    for (const auto& road : roads) 
    {
        int A = road.first;
        int B = road.second;
        graph[A].push_back(B);
        graph[B].push_back(A);
    }

    vector<bool> visitedX(N, false);
    vector<bool> visitedY(N, false);
    queue<pair<int, int>> queueX;
    queue<pair<int, int>> queueY; 
    queueX.push({X, 0});
    queueY.push({Y, 0});
    visitedX[X] = true;
    visitedY[Y] = true;
    while (!queueX.empty()) 
    {
        int cityX = queueX.front().first;
        int stepsX = queueX.front().second;
        queueX.pop();
        for (int neighbor : graph[cityX]) 
        {
            if (!visitedX[neighbor] && stepsX + 1 <= K) 
            {
                visitedX[neighbor] = true;
                queueX.push({neighbor, stepsX + 1});
            }
        }
    }
    while (!queueY.empty()) {
        int cityY = queueY.front().first;
        int stepsY = queueY.front().second;
        queueY.pop();
        for (int neighbor : graph[cityY]) 
        {
            if (!visitedY[neighbor] && stepsY + 1 <= K) 
            {
                visitedY[neighbor] = true;
                queueY.push({neighbor, stepsY + 1});
            }
        }
    }
    for (int i = 0; i < N; ++i) 
    {
        if (visitedX[i] && visitedY[i]) 
        {
            return true;
        }
    }
    return false;
}
int main() 
{
    int N, E;
    cin >> N >> E;
    vector<pair<int, int>> roads(E);
    for (int i = 0; i < E; ++i) 
    {
        cin >> roads[i].first >> roads[i].second;
    }
    int X, Y, K;
    cin >> X >> Y >> K;
    if (canReunite(N, E, roads, X, Y, K)) 
    {
        cout << "YES" << endl;
    } else 
    {
        cout << "NO" << endl;
    }
    return 0;
}

