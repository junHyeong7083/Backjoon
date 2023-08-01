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
	
	int t;
	cin >> t;
	queue<int> q;
	for(int i =0; i <t; ++i)
	{
		string input;
		cin >> input;
		if (input == "push")
		{
			int a;
			cin >> a;
			q.push(a);
		}
		else if (input == "front")
		{
			if (!q.empty())
				cout << q.front() << "\n";
			else
				cout << "-1" << "\n";
		}
		else if (input == "back")
		{
			if (!q.empty())
				cout << q.back() << "\n";
			else
				cout << "-1" << "\n";
		}
		else if (input == "size")
		{
			cout << q.size() << "\n";
		}
		else if (input == "empty")
		{
			if (q.empty())
				cout << "1" << "\n";
			else
				cout << "0" << "\n";
		}
		else if (input == "pop")
		{
			if (q.empty())
				cout << "-1" << "\n";
			else {
				int tmp = q.front();
				q.pop();
				cout << tmp << "\n";
			}

		}

	}


	return 0;
}