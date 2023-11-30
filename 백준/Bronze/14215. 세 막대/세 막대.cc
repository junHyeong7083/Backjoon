#include <stdio.h>
#include <string.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v;
	for (int e = 0; e < 3; ++e)
	{
		int n;
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	if (v[2] >= v[0] + v[1])
		v[2] = (v[0] + v[1]) - 1;

	int sum = 0;
	for (int e = 0; e < 3; ++e)
	{
		sum += v[e];
	}
	cout << sum;
}