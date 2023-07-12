#include<algorithm>
#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isBalanced(string s)
{
	stack<char> st;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == '(' || s[i] == '[')
		{
			st.push(s[i]);
		}

		else if (s[i] == ')')
		{
			if (st.empty() || st.top() != '(')
			{
				return false;
			}
			else
			{
				st.pop();
			}
		}
		
		else if (s[i] == ']')
		{
			if (st.empty() || st.top() != '[')
			{
				return false;
			}
			else
			{
				st.pop();
			}
		}
	}

	if (!st.empty()) // 비워진경우 -> 대칭
		return false;
	return true;
}


int main()
{
	string s = "";
	while (true)
	{
		getline(cin, s);

		if (s == ".")
			break;

		if (isBalanced(s))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}



	return 0;
}