#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	int score[1001];
	for (int i = 0; i < n; ++i)
	{
		cin >> score[i];
	}
	sort(score, score + n);
	cout << score[n - k];
	
	return 0;
}
