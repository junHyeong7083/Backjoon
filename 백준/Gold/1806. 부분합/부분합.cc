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

	int n, s;
	cin >> n >> s;
	for (int e = 0; e < n; ++e)
		cin >> arr[e];
	int left = 0, right = 0, sum = 0;
	int len = 100001;
	while (left<=right)
	{
		if (sum >= s)
		{
			len = min(len, (right - left));
			sum -= arr[left];
			left++;
		}
		else if (right == n)
			break;
		else 
		{
			sum += arr[right];
			right++;
		}
	}
	if (len == 100001)
		cout << "0";
	else
	{
		cout << len;
	}


	return 0;
}