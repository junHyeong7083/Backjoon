#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int Ysum = 0, Msum = 0;
	cin >> n;
	while (n--)
	{
		int a;
		cin >> a;
		
		Ysum += a / 30 + 1;
		Msum += a / 60 + 1;		
	}
	Ysum *= 10;
	Msum *= 15;

	if (Ysum > Msum)
		cout << "M " << Msum;
	else if (Ysum < Msum)
	{
		cout << "Y " << Ysum;
	}
	else
	{
		cout << "Y M " << Ysum;
	}

	return 0;
}