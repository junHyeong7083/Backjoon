#include<bits/stdc++.h>
using namespace std;
#pragma warning(disable : 4996)

int main()
{
	char Input[256];
	cin >> Input;
	int len = strlen(Input);
	int sosuSum = 0;
	for (int i = 0; i < len; ++i)
	{
		if ('a' <= Input[i] and Input[i] <= 'z')
		{
			sosuSum += Input[i] - 'a' + 1;
		}
		if ('A' <= Input[i] and Input[i] <= 'Z')
		{
			sosuSum += Input[i] - 'A' + 27;
		}
	}
	bool check = true;
	for (int i = 2; i < sosuSum; ++i)
	{
		if (sosuSum % i == 0)
			check = false;
	}
	
	if (check) cout << "It is a prime word." << endl;
	else if (!check) cout << "It is not a prime word." << endl;


	return 0;
}