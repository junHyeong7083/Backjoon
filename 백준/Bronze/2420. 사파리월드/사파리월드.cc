#include<iostream>
using	namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

	long long n, m;
	cin >> n >> m;
	long long  res = n - m;

	if (res < 0)
		cout << res * -1;
	else if(res > 0)
		cout << res;
	else
		cout << "0";
	return 0;
}