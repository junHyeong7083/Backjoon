#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include <algorithm>
#pragma warning(disable : 4996)
using namespace std;
const int MAX = 1000001;
int dp[MAX];
int main(void) {
	int n;
	scanf("%d",&n);
	for (int e = 1; e <= n; e++) dp[e] = 1e9;
	dp[n] = 0;
	for (int e = n; e > 1; e--) {
		if (e % 3 == 0) {
			dp[e / 3] = min(dp[e / 3], dp[e] + 1);
		}
		if (e % 2 == 0) {
			dp[e / 2] = min(dp[e / 2], dp[e] + 1);
		}
		dp[e - 1] = min(dp[e - 1], dp[e] + 1);
	}
	printf("%d", dp[1]);
}