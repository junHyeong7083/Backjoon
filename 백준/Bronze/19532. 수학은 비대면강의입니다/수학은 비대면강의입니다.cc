#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	
	int resultX = 0, resultY = 0;
	bool isout = false;
	for (int x = -999; x<=999; ++x)
	{
		for (int y = -999; y <= 999; ++y)
		{
			if ((a * x + b * y == c) && (d * x + e * y == f))
			{
				resultX = x;
				resultY = y;

				isout = true;
				break;
			}
			if (isout)
				break;
		}
	}

	cout << resultX << " " << resultY << endl;


	return 0;
}