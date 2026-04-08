#include<bits/stdc++.h>
using namespace std;
#pragma warning(disable : 4996)

int main()
{
	char Input[256];
	cin >> Input;
	int len = strlen(Input);
	for (int i = 0; i < len; ++i)
	{
		if ('a' <= Input[i] and Input[i] <= 'z')
		{
			Input[i] = Input[i] - 'a' + 'A';
		}
		else if ('A' <= Input[i] and Input[i] <= 'Z')
		{
			Input[i] = Input[i] - 'A' + 'a';
		}
	}
	cout << Input << endl;

	return 0;
}