#include<iostream>
#include<map>
#include<string>
#include<stack>
#include<vector>
#include<queue>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);


    priority_queue<int, vector<int>>
        heap;

    
    
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            if (heap.empty() == 1)
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << heap.top() << "\n";
                heap.pop();
            }
        }
        else
        {
            heap.push(a);
        }
    }
}    