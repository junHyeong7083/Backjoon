#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
#include<queue>
#include<cmath>
#include<stack>

using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	boj 25918

	북극곰이 o,x를 보면 ()와 )(로 찢어버림

	O -> ( )
	X -> ) (
	
	*/
	int n;
	string str;
	cin >> n >> str;
	stack<char>st;
	int res = 0;

	for (int e = 0; e < n; ++e)
	{
		if (st.empty() || st.top() == str[e] )
			st.push(str[e]);
		else
			st.pop();

		res = max(res, (int)st.size());
	}
	if (st.empty())
		cout << res;
	else
		cout << -1;


	return 0;
}