#include <iostream>
#include <vector>
#include<map>
#include<set>
#include<string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> str;
	set<string>s;
	
	for (int e = 0; e < str.size(); ++e)
	{
		string change;
		for (int q = e; q < str.size(); ++q)
		{
			change += str[q];
			s.insert(change);
		}
	}
	cout << s.size();

	return 0;
}