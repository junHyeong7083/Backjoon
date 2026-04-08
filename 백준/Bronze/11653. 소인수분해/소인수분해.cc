#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n == 1)
		return 0;
	while (n>1)
	{
		for (int i = 2; i <= n; ++i)
		{
			if (n % i == 0)
			{
				n = n / i;
				cout << i << endl;
				break;
			}
		}
	}

	return 0;
}