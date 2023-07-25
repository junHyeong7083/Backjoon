#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL); cin.tie(NULL);

	int n;
	cin >> n;

	stack<int> s;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin >> a;

		s.push(a);
	}
	int cnt = 0;
	int check = 0;
	while (s.size())
	{
		if (check < s.top())
		{
			check = s.top();
			cnt++;
		}
		s.pop();
	}

	cout << cnt;

	return 0;
}