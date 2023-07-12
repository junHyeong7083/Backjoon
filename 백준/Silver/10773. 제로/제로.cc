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

	while (t--)
	{
		int num;
		cin >> num;

		if (num == 0)
		{
			stack.pop();
		}
		else
		{
			stack.push(num);
		}
	}
	
	int sum = 0;
	while (true)
	{
		if (stack.empty())
			break;

		sum += stack.top();
		stack.pop();
	}

	cout << sum << endl;

	return 0;
}