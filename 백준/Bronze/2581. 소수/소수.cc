#include<bits/stdc++.h>
using namespace std;


int main()
{
	int M, N;
	cin >> M >> N;
	
	int reset = 0, sum = 0, min = 0; 
	for (int e = M; e <= N; ++e)
	{
		reset = 0;
		if (e == 1) continue;
		for (int i = 2; i < e; ++i)
		{
			if (e % i == 0)
				reset = 1;
		}
		if (reset == 0)
		{
			if (sum == 0)
				min = e;
			sum += e;
		}
	}
	if (sum == 0)
		cout << "-1";
	else
	{
		cout << sum << endl;
		cout << min;
	}

	return 0;
}