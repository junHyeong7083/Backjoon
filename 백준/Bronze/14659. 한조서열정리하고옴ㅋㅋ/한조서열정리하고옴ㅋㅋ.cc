#include<iostream>
#include<vector>
#include<algorithm>
using	namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector <int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	int result = 0;
	int maxValue = 0;
	int cnt = 0;
	for (int e = 0; e < n; ++e)
	{
		if (maxValue < arr[e])
		{
			maxValue = arr[e];
			result = max(result, cnt);
			cnt = 0;
		}
		else
			cnt++;
	}
	result = max(result, cnt);
	cout << result;

	return 0;
}