#include<bits/stdc++.h>
using namespace std;
#pragma warning(disable: 4996)


int main()
{
	int n;
	int arr[50][2];

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i][0] >> arr[i][1];
	}
	for (int e = 0; e < n; ++e)
	{
		int check = 1;
		for (int j = 0; j < n; ++j)
		{
			if (arr[e][0] < arr[j][0] && arr[e][1] < arr[j][1])
				check++;
		}
		cout << check << " ";
	}

	return 0;
}