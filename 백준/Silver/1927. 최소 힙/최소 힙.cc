#include <iostream>
#include <vector>
#include<map>
#include<set>
#include<string>
#include<stdio.h>
#include<queue>
#include<stack>
using namespace std;
priority_queue<int, vector<int>, greater<int>>pq;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		int x;
		cin >> x;
		if (x != 0)
		{
			pq.push(x);
		}
		else
		{
            if (pq.empty())
				cout << "0" << "\n";
            else {
				cout << pq.top() << "\n";
                pq.pop();
            }
		}
	}
	return 0;
}