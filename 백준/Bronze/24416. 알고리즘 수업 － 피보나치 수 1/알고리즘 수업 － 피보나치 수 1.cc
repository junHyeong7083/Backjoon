#include<iostream>
using namespace std;

int f[41] = { 0 };
int check1 = 0;
int check2 = 0;
int fib(int n)
{
	if (n == 1 || n == 2)
	{
		check1++;
		return 1;
	}
	else
		return (fib(n - 1) + fib(n - 2));
}

void fibonacci(int n)
{
	f[1] = 1;
	f[2] = 1;
	for (int i = 3; i <= n; ++i)
	{
		f[i] = f[i - 1] + f[i - 2];
		check2++;
	}
}


int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int n;
	cin >> n;
	fib(n);
	fibonacci(n);

	cout << check1 << endl << check2 << endl;

	return 0;
}