#include<iostream>
#include<vector>
using	namespace std;

vector<int>ar1;
vector<int>ar2; // 약수저장
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

	int a, b;
	cin >> a >> b;

	for (int i = 1; i <= a; ++i)
	{
		if (a % i == 0)
			ar1.push_back(i);
	}
	for (int e = 1; e <= b; ++e)
	{
		if (b % e == 0)
			ar2.push_back(e);
	}
	int max = 0;
	for (int q = 0; q < ar1.size(); ++q)
	{
		for (int w = 0; w < ar2.size(); ++w)
		{
			if (ar1[q] == ar2[w])
			{
				if (ar1[q] > max)
					max = ar1[q]; // 최대공약수
			}
		}
	}
	int minMul = 0;
	for (int i = 1;; ++i)
	{
		if (i % a == 0 && i % b == 0)
		{
			minMul = i;
			break;
		}
	}
	cout << max << endl << minMul << endl;

	return 0;
}