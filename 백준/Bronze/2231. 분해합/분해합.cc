#include<bits/stdc++.h>
using namespace std;

int Hap(int n)
{
	int sum = n;
	while (n> 0)
	{
		sum += n % 10;
		n = n / 10;
	}

	return sum;
}



int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		if (Hap(i) == n)
		{
			cout << i;
			break;
		}
		if (i == n)
		{
			printf("0");
		}
	}
	return 0;
}