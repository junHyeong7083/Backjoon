#include<iostream>
using	namespace std;


int ar[101] = { 0 };
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

	int sum = 0;
	for (int i = 0; i <10; ++i)
	{
		int a;
		cin >> a;
		sum += a;
		
		ar[a / 10]++;

	}

	int tt = 0;
	for (int j = 0; j < 101; ++j)
	{
		if (ar[j] > tt)
			tt = j;
	}

	cout << sum / 10 << endl << tt * 10;

	return 0;
}