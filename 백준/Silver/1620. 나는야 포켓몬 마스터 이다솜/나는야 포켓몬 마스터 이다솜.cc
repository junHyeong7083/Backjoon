#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<map>
#include<cctype>
#include<string>
using namespace std;
string check[100001];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	map<string, int>mm;
	for (int e = 1; e <= n; ++e)
	{
		string name;
		cin >> name;

		mm.insert({ name, e });
		check[e] = name;
	}
	for (int e = 1; e <= m; ++e)
	{
		string str;
		cin >> str;
		if (isdigit(str[0])) {
			cout << check[stoi(str)] << '\n';
		}
		else {
			cout << mm.find(str)->second << '\n';
		}
	}




	return 0;
}