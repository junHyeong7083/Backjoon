#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int arr[10];
int check[8] = { 0 };
int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL); cin.tie(NULL);

	int sum = 0;
	
	for (int i = 0; i < 9; ++i)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	int checkI = 0, checkE = 0;
	for (int i = 0; i < 9; ++i)
	{
		for (int e = i + 1; e < 9; ++e)
		{
			if (sum - arr[i] - arr[e] ==100)
			{
				checkI = i;
				checkE = e;
			}
		}
	}
	for (int i = 0; i < 9; ++i)
	{
		if (i == checkI || i == checkE)
			arr[i] = 0;
	}
	sort(arr, arr + 9);
	for (int a= 2; a < 9; ++a)
	{
		cout << arr[a] << endl;
	}

	return 0;
}