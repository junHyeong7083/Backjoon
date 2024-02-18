#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>
using namespace std;
#define ll long long 
struct Ruby 
{
    int weight;
    int price;
};

bool compare(Ruby a, Ruby b) 
{
    return a.weight < b.weight;
}

int main() 
{
    int n, k;
    cin >> n >> k;

    vector<Ruby> jewels(n);
    vector<int> bags(k);

    for (int i = 0; i < n; ++i) {
        cin >> jewels[i].weight >> jewels[i].price;
    }

    for (int i = 0; i < k; ++i) {
        cin >> bags[i];
    }

    sort(jewels.begin(), jewels.end(), compare);
    sort(bags.begin(), bags.end());

    ll res = 0;
    int idx = 0;
    priority_queue<int> pq;
    for (int i = 0; i < k; ++i) 
    {
        while (idx < n && jewels[idx].weight <= bags[i])
            pq.push(jewels[idx++].price);

        if (!pq.empty())
        {
            res += pq.top();
            pq.pop();
        }
    }

    cout << res << endl;

    return 0;
}
