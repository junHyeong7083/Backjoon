#include<iostream>
#include<queue>
#include<string>
using	namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

	queue<int> q;

	int t;
	cin >> t;
	for(int i = 0; i <t; ++i)
	{
		string a;
		cin >> a;
		if (a == "push")
		{
			int b;
			cin >> b;
			q.push(b);
		}//
		else if (a == "front")
		{
			if (q.empty())
				cout << "-1" << endl;
			else
				cout << q.front()<< endl;
		}
		else if (a == "back")
		{
			if (q.empty())
				cout << "-1" << endl;
			else
				cout << q.back() << endl;
		}
		else if (a == "size")
		{
			cout << q.size()<<endl;
		}
		else if (a == "pop")
		{
			if (q.empty())
				cout << "-1" << endl;
			else
			{
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (a == "empty")
		{
			if(q.empty())
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
	}

}