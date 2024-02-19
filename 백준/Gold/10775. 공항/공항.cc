#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
#define ll long long 

int parent[100001];

int findParent(int x) {
    if (parent[x] == x)
        return x;
    return parent[x] = findParent(parent[x]);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int G, P;
    cin >> G >> P;

    for (int i = 1; i <= G; ++i) {
        parent[i] = i; 
    }

    int cnt = 0;
    for (int i = 0; i < P; ++i) {
        int gi;
        cin >> gi;

        int dockingGate = findParent(gi); 
        if (dockingGate == 0)
            break;

        parent[dockingGate] = findParent(dockingGate - 1);
        cnt++;
    }

    cout << cnt;

    return 0;
}
