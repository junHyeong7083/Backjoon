#include<iostream>
using namespace std;

int main()
{
	int x; 
	cin >> x; // X

	int min = 64, sum = 64;
	int cnt = 1;
	while (sum> x)  // 막대기 두개의 합이 x보다 큰경우
	{
		min = min / 2; // 반으로 나누기

		if (sum - min >= x)
		{
			sum -= min;
		}
		else
			cnt++;
	}

	cout << cnt;

	return 0;
}