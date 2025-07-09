#include <iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

string word[10] = 
{
	"zero", "one", "two", "three", "four",
	"five", "six", "seven", "eight", "nine"
};

string ConvertToWord(int num)
{
	string res;
	string s = to_string(num);
	for (int e = 0; e < s.size(); ++e) {
		if (e > 0) res += " ";
		res += word[s[e] - '0'];
	}
	return res;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, n;
	cin >> m >> n;

	vector<pair<string,int>> v;
	for (int e = m; e <= n; ++e)
		v.push_back(make_pair(ConvertToWord(e),e));
		
	sort(v.begin(), v.end());

	int cnt = 0;
	for (int e = 0; e < v.size(); ++e)
	{
		cout << v[e].second << " ";
		cnt++;
		if (cnt % 10 == 0)
		{
			cnt = 0;
			cout << "\n";
		}
	}


	return 0;
}