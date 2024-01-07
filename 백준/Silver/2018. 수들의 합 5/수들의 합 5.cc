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
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	std::cout.tie(NULL);

	int n;
	cin >> n;
	int right = 0, left = 0, cnt = 0, sum =0;

	while (left <= right) 
	{
		if (sum == n)
			cnt++;
		if (sum > n)
		{
			sum -= left;
			left++;
		}
		else if (right >= n)
			break;
		else
		{
			sum +=right;
			right++;
		}
	}
	cout << cnt+1;
	return 0;
}