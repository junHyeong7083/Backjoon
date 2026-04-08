#include<bits/stdc++.h>
using namespace std;
#pragma warning(disable : 4996)

int main()
{
	int month;
	int day;
	cin >> month >> day;
	if (month == 2)
	{
		if (day == 18)
			cout << "Special";
		else if (day < 18)
			cout << "Before";
		else if (day > 18)
			cout << "After";
	}
	else if (month < 2)
		cout << "Before";
	else if (month > 2)
		cout << "After";

	return 0;
}