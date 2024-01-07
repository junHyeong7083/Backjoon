#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<stdio.h>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;
int arr[100001] = { 0 };
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	std::cout.tie(NULL);

	int n, k;
	cin >> n >> k;
	for (int e = 1; e <= n; ++e)
	{
		int input;
		cin >> input;
		arr[e] = arr[e - 1] + input;
		
	}
	int result = -1000000000;
	for (int q = k; q <= n; ++q)
	{
		result = max(result, (arr[q] - arr[q - k]));
	}

	cout << result;
	return 0;
}