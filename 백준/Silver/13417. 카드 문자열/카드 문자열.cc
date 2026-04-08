#include<iostream>
#include<vector>
#include<algorithm>
#include<deque>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		deque<char>dq;
		for (int e = 0; e < n; ++e)
		{
			char ch;
			cin >> ch;
			if (!e)
				dq.push_front(ch);
			else if (dq.front() >= ch)
				dq.push_front(ch);
			else
				dq.push_back(ch);
		}

		while (!dq.empty())
		{
			cout << dq.front();
			dq.pop_front();
		}
		cout << "\n";
	}


	return 0;
}