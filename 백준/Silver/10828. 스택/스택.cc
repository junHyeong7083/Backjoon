#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;


int main()
{
	int t;
	cin >> t;

	stack<int> stack;
	string order;

	while (t--)
	{
		cin >> order;

		if (order == "push")
		{
			int a;
			cin >> a;
			stack.push(a);
		}
		else if (order == "pop")
		{
			if (!stack.empty())
			{
				cout << stack.top() << endl;
				stack.pop();
			}
			else
				cout << "-1" << endl;
		}
		else if (order == "size")
		{
			cout << stack.size() << endl;
		}
		else if (order == "empty")
		{
			if (stack.empty())
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
		else if (order == "top")
		{
			if (!stack.empty())
			{
				cout << stack.top() << endl;

			}
			else
				cout << "-1" << endl;
		}

	}


	return 0;
}