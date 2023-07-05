#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, f,i,temp = 0;
	cin >> n >> f;
	n = (n / 100) * 100;


	for ( i = 0; i < 100; i++)
	{
		temp = n;
		if ((temp += i) % f == 0)
			break;
	}
	if (i < 10)
	{
		cout << "0";
	}

	cout << i;


	return 0;
}