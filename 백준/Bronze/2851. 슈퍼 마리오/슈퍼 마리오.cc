#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;

int GCD(int a, int b)
{
	if (b == 0)
		return a;

	return GCD(b, a % b);
}

int main()
{
	vector<int> v;
	for (int e = 0; e < 10; ++e)
	{
		int input;
		cin >> input;
		v.push_back(input);
	}

	int res = 0;
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		sum += v[i];
		if (abs(100 - res) >= abs(100 - sum))
		{
			res = sum;
		}

	}
	cout << res;



	return 0;
}