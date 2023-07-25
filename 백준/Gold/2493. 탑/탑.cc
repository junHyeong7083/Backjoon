#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<utility>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL); cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> height(n);
	for (int i = 0; i < n; ++i)
		cin >> height[i];


	vector<int> check(n, 0);

	stack<pair<int, int>>mystack;
	for (int i = 0; i < n; ++i)
	{
		while (!mystack.empty() && mystack.top().first < height[i])
		{
			mystack.pop();
		}
		if (!mystack.empty())
			check[i] = mystack.top().second + 1;

		mystack.push(make_pair(height[i], i));
	}
	
	for (int i = 0; i < n; ++i)
	{
		cout << check[i] << " ";
	}


	return 0;
}