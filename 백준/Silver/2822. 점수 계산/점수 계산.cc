#include <iostream>
#include<string>
#include<vector>
using namespace std;

int arr[9] = { 0 };
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	for (int i = 0; i < 8; ++i)
	{
		cin >> arr[i];
	}

	int answer[9] = { 0 };
	int sum = 0, t = 1, p = 0;
	for (int j = 0; j < 8; ++j)
	{
		int check = 0;
		for (int k = 0; k < 8; ++k)
		{
			if (arr[j] >= arr[k])
				check++;
		}
		if (check >= 4)
		{
			sum += arr[j];
			answer[p] = j+1;
			p++;
		}
	}
	cout << sum << endl;
	for (int a = 0; a < 5; ++a)
	{
		if (a < 4)
			cout << answer[a] << " ";
		else
			cout << answer[a];
	}



	return 0;
}
