#include <iostream>
#include <vector>
#include<map>
#include<set>
#include<string>
#include<stdio.h>
#include<queue>
#include<stack>
using namespace std;

int main()
{
	int n;
	cin >> n;
	queue<int> q;

	for (int e = 1; e <= n; ++e)
	{
		q.push(e);
	}
	vector<int> v;
	while (q.size() != 1)
	{
		v.push_back(q.front());
		q.pop();
		int tmp = q.front();
		q.pop();
		q.push(tmp);
	}
	for (int e = 0; e < v.size(); ++e)
	{
		cout << v[e] << " ";
	}
	cout << q.front();


	return 0;
}