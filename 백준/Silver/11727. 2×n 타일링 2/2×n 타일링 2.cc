#include<iostream>

using namespace std;

long long int f[1001] = { 0 };
void dp(int n)
{
	f[1] = 1 % 10007;;
	f[2] = 3 % 10007;
	f[3] = 5 % 10007;
	for (int e = 3; e < n; ++e)
	{
		f[e + 1] = (f[e] + (2 * f[e - 1]))%10007;
		//f[e + 1] % 10007;
	}

	cout << f[n];

}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	dp(n);

	return 0;
}




/*
i - 1
2 -3
3 - 5
4 - 11
*/