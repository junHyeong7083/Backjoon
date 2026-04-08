#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	char name[256];
	int check[27] = { 0 };
	string s = "abcdefghijklmnopqrstuvwxyz";
	bool bolcheck = true;

	while (N--)
	{
		cin >> name;
		check[name[0] - 'a'] ++;
	}
	for (int i = 0; i < 26; ++i)
	{
		if (check[i] >= 5)
		{
			cout << s[i];
			bolcheck = false;
		}
	}
	if (bolcheck == true)
		cout << "PREDAJA";

	return 0;
}