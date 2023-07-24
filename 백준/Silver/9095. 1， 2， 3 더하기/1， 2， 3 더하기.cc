#include<iostream>
using namespace std;
int f[11] = { 0 };

void dp(int n)
{
	f[1] = 1;
	f[2] = 2;
	f[3] = 4;

	for (int i = 4; i <= n; ++i)
	{
		f[i] = f[i - 1] + f[i - 2] + f[i-3];
	}
	cout << f[n] << endl;

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
		dp(a);
	}


	return 0;
}