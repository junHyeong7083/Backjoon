#include <iostream>
#include<string>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string x;
	cin >> x;
	int sum = 0;
	int cnt = 1;

	if (x[1] ==NULL)
		cnt = 0;
	for (char c : x)
	{
		sum += c - '0';
	}
	while (sum > 9)
	{
		int a = 0;
		while (sum != 0)
		{
			a += sum % 10;
			sum /= 10;
		}
		sum = a;
		cnt++;
	}
	if (sum % 3 == 0)
		cout << cnt << endl << "YES" << endl;
	else
		cout << cnt << endl << "NO" << endl;
	return 0;

}
