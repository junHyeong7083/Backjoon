#include<bits/stdc++.h>
using namespace std;
#pragma warning(disable : 4996)

int arr[10000] = { 0 };
int main()
{
	// 자연수 n k  
	// n의 약수중 k 번째로 작은수 
	int n;
	cin >> n;
	int e = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (n % i == 0)
		{
			arr[e] = i;
			e++;
		}
	}
	int k;
	cin >> k;
	cout << arr[k - 1];

	return 0;
}