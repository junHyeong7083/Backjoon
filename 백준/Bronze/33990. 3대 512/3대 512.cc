#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int>v;

	for (int e = 0; e < n;++e)
	{
		int x, y, z;

		cin >> x >> y >> z;
		int sum = 0;
		sum = x + y + z;

		if (sum >= 512)
			v.push_back(sum);

	}

	if (v.empty())
	{
		cout << -1;
		return 0;
	}
	else
	{
		sort(v.begin(), v.end());
		cout << v.front();
	
		return 0;
	}


}