#include<bits/stdc++.h>
using namespace std;
#pragma warning(disable : 4996)

int main()
{
	char arr[9][9];
	for (int i = 0; i < 8; ++i)
	{
		cin >> arr[i];
	}
	int check = 0;
	for (int e = 0; e < 8; ++e)
	{
		for (int k = 0; k < 8; ++k)
		{
			if ((e + k) % 2 == 0)
				if(arr[e][k] == 'F')
					check++;
		}
	}
	cout << check;


	return 0;
}