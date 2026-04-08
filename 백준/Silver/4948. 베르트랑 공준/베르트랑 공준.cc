#include<bits/stdc++.h>
using namespace std;

int arr[300000];
int main()
{
	while (1)
	{
		int n;
		cin >> n;
		if (n == 0)
			break;
		for (int i = 0; i < 2 * n; ++i)
			arr[i] = 0;
		for (int e = 2; e < 2 * n; ++e)
		{
			if (arr[e] == 0)
				arr[e] = 0;
			for (int j = e + e; j <= 2 * n; j += e)
				if (arr[j] != 1)
					arr[j] = 1;
		}
		int cnt = 0;
		for (int i = n + 1; i <= 2 * n; ++i)
		{
			if (arr[i] == 0)
				cnt++;
		}
		cout << cnt << endl;
	}

	return 0;
}