#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int n;
	cin >> n;
	int sum = 0;
	while (n--)
	{
		int a = 0, b=0;
		cin >> a >> b;
		sum += a * b;
	}
	if (x == sum) cout << "Yes" << endl;
	else
		cout << "No" << endl;
	
	return 0;
}