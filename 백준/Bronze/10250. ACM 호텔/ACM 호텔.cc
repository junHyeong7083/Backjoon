#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int h, w, n;
		cin >> h >> w >> n;
		int first = 0;
		first = n % h;
		if (first == 0) first = h;
		int last = 0;
		last = ceil((float)n / h);
		cout << first * 100 + last << endl;

	}


	return 0;
}