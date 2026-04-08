#include<bits/stdc++.h>
using namespace std;
#pragma warning(disable : 4996)

int arr[1001];

int main()
{
	int input = 1;
	for (int i = 1; i <= 1000; ++i)
	{
		for (int e = 1; e <= i; ++e)
		{
			arr[input] = i;
			if (input > 1000) break;
			input++;
		}
	}
	int a, b;
	cin >> a >> b;
	int sum = 0;
	for (int j = a; j <= b; ++j)
	{
		sum += arr[j];
	}

	cout << sum;

	return 0;
}