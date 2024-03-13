#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
#include<queue>

using namespace std;

int n;
bool check[500002] = { false };
vector<int>v;
void Prime()
{
	check[0] = false;
	check[1] = false;
	for (int e = 2; e < 500002; ++e)
	{
		if (check[e])
			continue;
		else
		{
			for (int j = e + e; j < 500002; j += e)
			{
				check[j] = true;
			}
		}
	}

}





int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	Prime();
	cin >> n;

	for (int e = 2; e < 500001; ++e)
	{
		if (!check[e])
			v.push_back(e);
	}
	cout << v[n - 1];
	return 0;
}