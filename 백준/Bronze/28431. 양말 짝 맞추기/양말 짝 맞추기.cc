#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int arr[5];
	for (int e = 0; e < 5; ++e)
	{
		cin >> arr[e];
	}
	int check[5];
	int cc = 0;
	int resultIndex = 0;
	for (int i = 0; i < 5; ++i)
	{
		cc = 0;
		for (int e = 0; e < 5; ++e)
		{
			if (arr[i] == arr[e])
				cc++;
			check[i] = cc;
		}
		if (check[i] % 2 == 1)
			resultIndex = i;
	}
	cout << arr[resultIndex];

	return 0;
}