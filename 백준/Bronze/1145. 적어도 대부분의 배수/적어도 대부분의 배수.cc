#include<bits/stdc++.h>
using namespace std;

int main()
{
	int input[5];
	int i = 1;
	for (int e = 0; e < 5; ++e)
		cin >> input[e];

	while (1)
	{
		int check = 0;
		for (int k = 0; k < 5; ++k)
		{
			if (i >= input[k] && i % input[k] == 0)
				check++;
		}
		if (check >= 3)
			break;

		i++;
	}
	cout << i;

	return 0;
}