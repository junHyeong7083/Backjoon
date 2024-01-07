#include <iostream>
#include <vector>
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
	cout.tie(NULL);

	int n;
	vector<int> v;
	cin >> n;
	for (int e = 0; e < n; ++e)
	{
		int x; 
		cin >> x;
		v.push_back(x);
	}
	int x;
	cin >> x;
	sort(v.begin(), v.end());
	int cnt = 0;
	
	int right = n - 1, left = 0;
	// 1 2 3 5 7 9 10 11 12 // 13
	while (true)
	{
		if (left >= right)
			break;


		int check = v[right] + v[left];
		if (check == x)
		{
			cnt++;
			left++;
			right--;
		}
		else
		{
			if (check >= x)
				right--;
			else
				left++;

		}

	}
	cout << cnt;

	return 0;
}