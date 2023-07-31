#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;





int main()
{
	ios::sync_with_stdio(0);
	cout.tie(NULL);
	cin.tie(NULL);

	int n, k;
	cin >> n>> k;

	queue<int> q;
	vector<int> v;
	int cnt = 0;
	for (int e = 1; e <= n; ++e)
	{
		q.push(e);
	} // 입력

	while(!q.empty())
	{
		for (int e = 0; e < k-1; ++e)
		{
			int front = q.front();
			q.pop();
			q.push(front);
		}
		v.push_back(q.front());
		q.pop();
	}
	cout << "<";
	for (int i = 0; i < n; ++i)
	{
		if (i == n - 1)
		{
			cout << v[i] << ">";
		}
		else
			cout << v[i] << ", ";
	}
	return 0;
}