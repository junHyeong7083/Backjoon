#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)//n
	{
		int n;
		cin >> n;
		string str, target;
		cin >> str >> target;

		int cnt = 0;
		
		int b = 0, w = 0;
		for (int e = 0; e < target.size(); ++e)
		{
			if (target[e] != str[e])
			{
				if (str[e] == 'B')
					b++;
				else
					w++;
			}
		}
		
		int res = b >= w ? b : w;
		cout << res << "\n";

	}

	return 0;
}