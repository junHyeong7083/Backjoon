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
	for (int e = 0; e < n; ++e)
	{
		int check = 0;
		for (int k = e + 1; k < n; ++k)
		{
			if (arr[e] > arr[k])
			{
				check++;
				result = max(result, check);
			}
			else
				break;

		}
	}
	cout << result;

	return 0;
}