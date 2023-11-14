#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	while (true)
	{
		vector<int>v;
		int maxV = 0;
		for (int e = 0; e < 3; ++e)
		{
			int a;
			cin >> a;
			v.push_back(a);
		}
		if (v[0] == 0 && v[1] == 0 && v[2] == 0)
			break;
		sort(v.begin(), v.end());
		if (v[2] >= v[0] + v[1])
			cout << "Invalid" << endl;
		else if (v[0] == v[1] && v[1] == v[2])
			cout << "Equilateral" << endl;
		else if (v[0] != v[1] && v[1] != v[2] && v[0] != v[2])
		{
			cout << "Scalene" << endl;
		}
		else
		{
			cout << "Isosceles" << endl;
		}


	}

	return 0;
}