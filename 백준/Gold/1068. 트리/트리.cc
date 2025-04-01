#include <iostream>
#include <vector>
#include<queue>
#include<cmath>
using namespace std;

vector<int> tree[50];
bool deleted[50];
int root, N, deletenode;

void DeleteNode(int node) 
{
    deleted[node] = true; 
    for (int child : tree[node]) 
        DeleteNode(child); 
    
}
int CountLeafNode(int node) 
{
    if (deleted[node]) return 0; // 삭제된 노드면 무시
    if (tree[node].empty() || (tree[node].size() == 1 && deleted[tree[node][0]]))
        return 1; // 자식이 없거나 유일한 자식이 삭제되었으면 리프 노드

    int count = 0;
    for (int child : tree[node])
        count += CountLeafNode(child);

    return count;
}

int main()
{
    cin >> N;
    vector<int> parent(N);

    for (int i = 0; i < N; i++)
    {
        cin >> parent[i];
        if (parent[i] == -1)
            root = i;

        else
            tree[parent[i]].push_back(i);

    }

    cin >> deletenode;
    if (deletenode == root)
        cout << 0 << "\n";
    else
    {
        DeleteNode(deletenode);
        cout << CountLeafNode(root) << "\n";
    }


    return 0;
}