#include<iostream>
using	namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int v, e;
		cin >> v >> e; //  v : 꼭  e: 모
		// 꼭 - 모 + 면 = 2;
		int result = 2 - v + e;

		cout << result << endl;
	}
	return 0;
}