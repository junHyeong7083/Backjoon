#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
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
	sort(v.begin(), v.end());
	int res = 0;
	for (int i = 0; i < n; i++) {
		res = max(res, (n - i) * v[i]);
	}
	cout << res;



	return 0;
}