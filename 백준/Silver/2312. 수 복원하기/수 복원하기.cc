#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int>v(n+1,0);
		int save = n;
		for (int e = 2; e <= save; ++e)
		{
			while (save %e ==0)
			{
				save /= e;
				v[e]++;
			}
		}
		for (int q = 2; q <= n; ++q)
		{
			if (v[q] != 0)
				cout << q << " " << v[q] << "\n";
		}
	}



	return  0;
}