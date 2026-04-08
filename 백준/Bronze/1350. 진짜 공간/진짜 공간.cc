#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	int F[51];

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> F[i];
	cin >> m;
	// input

	long long check = 0;

	for (int i = 0; i < n; ++i)
	{
		if (F[i] == 0) continue;
		if (F[i] <= m) check++;
		else
		{
			check += (F[i] / m);
			if (F[i] % m != 0) check++;
		}
	}

	cout << m * check;


	return 0;
}
