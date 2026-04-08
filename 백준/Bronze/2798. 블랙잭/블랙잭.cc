#include<bits/stdc++.h>
using namespace std;

int card[100];
int main()
{
	// n장카드 숫자 m
	int n;
	cin >> n;
	int m;
	cin >> m;
	for (int i = 0; i < n; ++i)
	{
		cin >> card[i];
	}
	int sum = 0, check = 0;
	for (int e = 0; e < n; ++e)
	{
		for (int k = e + 1; k < n; ++k)
		{
			for (int j = k + 1; j < n; ++j)
			{
				sum = card[e] + card[k] + card[j];
				if (sum > check and sum <= m)
					check = sum;
			}
		}
	}

	cout << check;

	return 0;
}