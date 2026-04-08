#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	int arr[51];
	cin >> T;
	for (int i = 0; i < T; ++i)
	{
		cin >> arr[i];
	}
	int e, tmp;
	for (int j = 0; j < T; ++j)
	{
		e = j;
		for (int k = j; k < T; ++k)
		{
			if (arr[e] >= arr[k]) e = k;
		}
		tmp = arr[j];
		arr[j] = arr[e];
		arr[e] = tmp;
	}
	cout << arr[0] * arr[T - 1];
	return 0;
}
