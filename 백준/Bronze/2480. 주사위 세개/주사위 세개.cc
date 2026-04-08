#include<iostream>
using namespace std;

int main()
{
	int arr[3];
	int a, b, c, max = 0,ans = 0;
	cin >> a >> b >> c;
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	if (a == b && b == c && a == c)
		ans = 10000 + a * 1000;
	else if (a == b || a == c)
		ans = 1000 + a * 100;
	else if (b == c)
		ans = 1000 + b * 100;
	else
	{
		for (int i = 0; i < 3; ++i)
		{
			if (max < arr[i])
				max = arr[i];
		}
		ans = max * 100;
	}
	
	cout << ans;
	return 0;
}