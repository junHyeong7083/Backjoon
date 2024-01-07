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
int arr[10001] = { 0 };
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	std::cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	for (int e = 0; e < n; ++e)
	{
		cin >> arr[e];
	}
	int cnt = 0, left = 0, right = 0;
	int sum = 0;
	while (left <= right)
	{
		if (sum == m)
			cnt++;
		if (sum > m)
		{
			sum -= arr[left];
			left++;
		}
		else if (right >= n)
			break;
		else
		{
			sum += arr[right];
			right++;
		}
	}
	std::cout << cnt;

	return 0;
}