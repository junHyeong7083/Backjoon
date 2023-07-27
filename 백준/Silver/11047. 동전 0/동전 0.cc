#include<iostream>
#include<vector>
#include<algorithm>
using	namespace std;


int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> coin(n);
	for (int e = 0; e < n; ++e)
	{
		cin >> coin[e];
	}

	int result = 0;
	for (int i = n - 1; i >= 0; --i)
	{
		result += k / coin[i];
		k %= coin[i];
	}
	cout << result << endl;


	return 0;
}