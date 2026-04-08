#include<iostream>

using namespace std;

bool b[101];

int main(void)
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> b[i];

	int m;
	cin >> m;

	while (m--)
	{
		int student, num;
		cin >> student >> num;

		if (student == 1)
			for (int i = num; i <= n; i += num)
				b[i] = !b[i];
		else
		{
			int s = num, e = num;
			while (s >= 1 && e <= n)
			{
				s--, e++;
				if (b[s] != b[e])
					break;
			}

			for (int i = s + 1; i <= e - 1; i++)
				b[i] = !b[i];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		cout << (b[i] ? 1 : 0) << ' ';
		if (i % 20 == 0)
			cout << '\n';
	}

	return 0;
}