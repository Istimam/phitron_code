#include<bits/stdc++.h>
using namespace std;
int knapsack(int Item, int sum, int value[], int weight[])
{
    if(Item == 0 || sum == 0)
        return 0;
    if(weight[Item - 1] <= sum)
    {
        int op1 = knapsack(Item-1, sum - weight[Item-1], 
        value, weight) + value[Item-1];
        int op2 = knapsack(Item-1, sum, value, weight);
        return max(op1, op2);
    }
    else
    {
        return knapsack(Item-1, sum, value, weight);
    }
}
int main()
{
    int I;
    cin >> I;
    int v[I], w[I];
    for (int i = 0; i < I; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < I; i++)
    {
        cin >> w[i];
    }
    int s;
    cin >> s;
    cout << knapsack(I, s, w, v);
    return 0;
}