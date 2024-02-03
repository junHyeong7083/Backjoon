#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>


using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	vector<int> v1, v2;
	for (int e = 0; e < n; ++e)
	{
		int x;
		cin >> x;
		if (x > 0)
			v1.push_back(x);
		else
			v2.push_back(x);

	}

	sort(v1.begin(), v1.end(), [](const auto& a, const auto& b) { // 양수
		return a > b;
		});
	sort(v2.begin(), v2.end()); // 음수

	int sum = 0;
	for (int e = 0; e < v1.size(); ++e)
	{
		if (e < v1.size() - 1)
		{
			int a = v1[e] * v1[e + 1];
			int b = v1[e] + v1[e + 1];
			if (a > b)
			{
				sum += a;
				e++;
				continue;
			}
		}
		sum += v1[e];
	}
	for (int e = 0; e < v2.size(); ++e)
	{
		if (e < v2.size() - 1)
		{
			int a = v2[e] * v2[e + 1];
			int b = v2[e] + v2[e + 1];
			if (a > b)
			{
				sum += a;
				e++;
				continue;
			}
		}
		sum += v2[e];
	}

	cout << sum;
	return 0;
}
