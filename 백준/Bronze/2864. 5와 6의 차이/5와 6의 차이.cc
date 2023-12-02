#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	int lena = a.length(); 
	int lenb = b.length();

	int len = max(lena, lenb);

	for (int e = 0; e < len; ++e)
	{
		if (a[e] != NULL)
		{
			if (a[e] == '6')
				a[e] = '5';
		}
		if (b[e] != NULL)
		{
			if (b[e] == '6')
				b[e] = '5';
		}

	}
	int minres = stoi(a) + stoi(b);

	for (int e = 0; e < len; ++e)
	{
		if (a[e] != NULL)
		{
			if (a[e] == '5')
				a[e] = '6';
		}
		if (b[e] != NULL)
		{
			if (b[e] == '5')
				b[e] = '6';
		}

	}
	int maxres = stoi(a) + stoi(b);
	cout << minres << " " << maxres;

	return 0;
}