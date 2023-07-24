#include<iostream>
using namespace std;

int f[41][3] = { 0,0 };

void fib(int n)
{
	f[0][0] = 1;
	f[0][1] = 0;

	f[1][0] = 0;
	f[1][1] = 1;
	for (int i = 2; i <= n; ++i)
	{
		f[i][0] = f[i - 1][0] + f[i - 2][0];
		f[i][1] = f[i - 1][1] + f[i - 2][1];

	}
	cout << f[n][0] << " " << f[n][1] << endl;

}



int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int a;
		cin >> a;
		fib(a);
	}


	return 0;
}