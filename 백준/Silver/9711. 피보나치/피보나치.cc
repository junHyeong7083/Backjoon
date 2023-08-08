#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


long long int f[10001];
int dp(int n, int q)
{
	f[1] = 1;
	f[2] = 1;
	for (int e = 3; e <= n; ++e)
	{
		f[e] = f[e - 1] + f[e - 2];
		f[e] %= q;
	}
	return f[n] % q;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int T, P,Q;
	cin >> T;


	for(int e = 1; e <=T; ++e)
	{
		cin >> P >> Q;
		cout << "Case #" << e << ": " <<dp(P,Q)<< "\n";

	}

	return 0;
}
