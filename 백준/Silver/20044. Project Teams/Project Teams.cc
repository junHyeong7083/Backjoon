#include <string>
#include <vector>
#include <algorithm>
#include<cmath>
#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> v;

	for (int e = 0; e < 2 * n; ++e)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end(), [](const auto& a, const auto& b)
		{
			return a > b;
		});

	vector<int>check;
	int left = 0, right = v.size() - 1;
	while (1)
	{
		if (left >= right) break;
		int sum = v[left] + v[right];
		check.push_back(sum);

		left++;
		right--;

	}
	sort(check.begin(), check.end());
	cout << check.front();


	return 0;
}
