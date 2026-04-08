#include<bits/stdc++.h>
using namespace std;
#pragma warning(disable : 4996)

int main()
{
	long long int sum = 0;
	char a[10001];
	char b[10001];

	cin >> a >> b;
	int lenA = strlen(a);
	int lenB = strlen(b);
	for (int i = 0; i < lenA; ++i)
	{
		for (int e = 0; e < lenB; ++e)
		{
			sum += ((a[i] - '0') * (b[e] - '0'));
		}
	}
	cout << sum << endl;
	return 0;
}