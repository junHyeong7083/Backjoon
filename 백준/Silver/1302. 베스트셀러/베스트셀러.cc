#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<map>
using namespace std;

int main()
{
	map<string, int> m;
	int n;
	cin >> n;
	for (int e = 0; e < n; ++e)
	{
		string a;
		cin >> a;
		m[a]++;
	}
	int cnt = 0;
	for (auto l : m)
	{
		cnt = max(cnt, l .second);
	}
	for (auto l : m)
	{
		if (l.second == cnt)
		{
			cout << l.first;
			break;
		}
	}



	return 0;
}