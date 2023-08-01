#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cout.tie(NULL);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	vector<string>ar;

	ar.push_back(s);
	while(s.size() != 1)
	{
		s.erase(s.begin());
		ar.push_back(s);
	}
	sort(ar.begin(), ar.end());

	for (int e = 0; e < ar.size(); ++e)
	{
		cout << ar[e] << endl;
	}
	return 0;
}