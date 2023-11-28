#include<iostream>
#include<deque>
#include <string>
using namespace std;
int main()
{
	deque<int> dq;
	int t;
	cin >> t;
	for (int e = 0; e < t; ++e)
	{
		
		string Input;
		cin >> Input;

		if (Input == "push_front")
		{
			int value;
			cin >> value;
			dq.push_front(value);
		}
		else if (Input == "push_back")
		{
			int value;
			cin >> value;
			dq.push_back(value);
		}
		else if (Input == "pop_front")
		{
			if (!dq.empty())
			{
				cout << dq.front() << endl;
				dq.pop_front();
			}
			else
				cout << "-1" << endl;
		}
		else if (Input == "pop_back")
		{
			if (!dq.empty())
			{
				cout << dq.back() << endl;
				dq.pop_back();
			}
			else
				cout << "-1" << endl;
		}
		else if (Input == "size")
		{
			cout << dq.size() << endl;
		}
		else if (Input == "empty")
		{
			cout << dq.empty() << endl;
		}
		else if (Input == "front")
		{
			if (!dq.empty())
				cout << dq.front() << endl;
			else
				cout << "-1" << endl;

		}
		else if (Input == "back")
		{
			if (!dq.empty())
				cout << dq.back() << endl;
			else
				cout << "-1" << endl;
		}
	}

	return 0;
}