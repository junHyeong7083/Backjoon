#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll unsigned long long
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		ll  sum = 0;
		cin >> n;
		for (int e = 0; e < n; ++e)
		{
			ll  input;
			cin >> input;
			sum += input % n;
		}
		if (sum % n == 0)
			cout << "YES" << endl;
		else
		{
			cout << "NO" << endl;
		}
	}



	return 0;
}