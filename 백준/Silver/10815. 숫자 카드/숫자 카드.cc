#include<bits/stdc++.h>
using namespace std;
#pragma warning(disable : 4996)

int input[500001];
int check[500001];

void Serach(int a, int b)
{
	int low = 0;
	int high = a - 1;
	while (low <= high)
	{
		int middle = (high + low) / 2;
		if (input[middle] == b)
		{
			cout << "1 ";
			return;
		}
		else
		{
			if (input[middle] > b)
				high = middle - 1;
			else
				low = middle + 1;
		}
	}
	cout << "0 ";
}

int main()
{
	int tn;
	cin >> tn;
	for (int i = 0; i < tn; ++i)
	{
		cin >> input[i];
	}
	int tm;
	cin >> tm;
	for (int e = 0; e < tm; ++e)
	{
		cin >> check[e];
	}
	sort(input, input + tn);
	for (int j = 0; j < tm; ++j)
	{
		Serach(tn, check[j]);
	}
	return 0;
}