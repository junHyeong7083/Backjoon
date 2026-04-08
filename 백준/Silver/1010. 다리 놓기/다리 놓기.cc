#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, a = 1;

		cin >> n >> m;

		for (int i = 0; i < n; i++)
		{
			a = a * (m - i);
			a = a / (1 + i);
		}
		cout << a << endl;
	}
    return 0;
}