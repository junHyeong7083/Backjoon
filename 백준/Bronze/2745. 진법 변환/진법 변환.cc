#include<iostream>
#include<string>


using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	string n;
	int  b;

	cin >> n >> b;
	int sum = 0;
	for (int e = 0; e < n.size(); ++e)
	{
		if (n[e] >= '0' && n[e] <= '9')
			sum = sum * b + (n[e] - 48);
		else
			sum = sum * b + (n[e] - 65 + 10);
	}

	cout << sum;


	return 0;
}