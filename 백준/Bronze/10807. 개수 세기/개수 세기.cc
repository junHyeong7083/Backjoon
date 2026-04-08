#include<bits/stdc++.h>
using namespace std;
#pragma warning(disable : 4996)

int main()
{
	int n;
	int arr[101];
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	int v;
	cin >> v;

	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == v)
			cnt++;
	}
	cout << cnt;


	return 0;
}