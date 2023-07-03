#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin >> t;
	long long a, b;
	long long check = 0;
	while (t--)
	{
		cin >> a >> b;
		check = a;
		if (b % 4 == 0)
			b = 4;
		else
			b %= 4;
		check = pow(a, b);
		if (check % 10 == 0) 
			cout << 10 << endl;
		else 
			cout << check % 10 << endl;
	}

	return 0;
}