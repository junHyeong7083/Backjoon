#include<bits/stdc++.h>
using namespace std;

/*
	운동    기존맥박
	맥박 t     x
	운동후 -> x +t 

	휴식후 -> r
	기존맥박  x - r 
	if (x-r <= m) 맥박 = m
*/

// N (분) m(최소맥박) M(최대맥박) T(운동) R(휴식)


int main()
{
	int N, m, M, T, R;
	cin >> N >> m >> M >> T >> R;
	if (M -m < T )
	{
		cout << "-1";
		return 0;
	}
	int total = m;
	int extime = 0;
	int time = 0;
	while (extime< N)
	{
		if (total + T<= M)
		{
			total += T;
			extime++;
			time++;		
		}
		else
		{
			if (total - R < m)
			{
				total = m;
				time++;
			}
			else
			{
				total -= R;
				time++;
			}
		}
	}
	cout << time;

	return 0;
}