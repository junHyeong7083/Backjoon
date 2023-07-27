#include<iostream>
#include<vector>
#include<algorithm>
using	namespace std;

int arr[3] = { 0 };
int main()
{
	for (int a = 0; a < 3; ++a)
		cin >> arr[a];
	for (int i = 0; i < 3; ++i)
	{
		for (int e = i+1; e < 3; ++e)
		{
			int tmp = 0;
			if (arr[i] > arr[e])
			{
				tmp = arr[i];
				arr[i] = arr[e];
				arr[e] = tmp;
			}
		}
	}
	int ans = arr[0] + arr[2] - arr[1];

	if (ans == arr[1])
		ans = arr[1] - arr[0] + arr[2];

	cout << ans;


	return 0;
}