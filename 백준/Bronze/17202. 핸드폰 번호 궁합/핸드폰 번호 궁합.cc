#include<iostream>
#include<string.h>
#include<string>
using namespace std;

string s1, s2;
string add;
string aa;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> s1 >> s2;

	for (int i = 0; i < s1.size(); ++i)
	{
		add = add+ s1[i] + s2[i];
	}

	while (add.size() != 2)
	{
		for (int k = 0; k < add.size()- 1; ++k)
		{
			aa += char('0' + ((add[k] - '0') + (add[k + 1] - '0'))% 10);
		}
		add = aa;
		aa.clear();
	}

	cout << add;

	return 0;
}