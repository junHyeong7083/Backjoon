#include<iostream>
#include<string.h>
#include<string>
using namespace std;

string a;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	cin >> a;
	for (int i = 0; i < a.size(); ++i)
	{
		for (int k = i; k < a.size(); ++k)
		{
			char tmp[2] = "";
			int first = 0, last = 0;


			first = a[i] - '0';
			last = a[k] - '0';
			if (first <= last)
			{
				tmp[0] = a[i];
				a[i] = a[k];
				a[k] = tmp[0];

			}
		}
	}
	cout << a << endl;

	return 0;
}