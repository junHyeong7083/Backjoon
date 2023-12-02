#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v;
	for (int e = 0; e < n; ++e)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	int cnt = 0;
	for (int e = n - 1; e >= 1; --e)
	{
		while (v[e] <= v[e-1])
		{
			v[e - 1]--;
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}