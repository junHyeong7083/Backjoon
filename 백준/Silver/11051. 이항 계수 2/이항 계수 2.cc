#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	std::cout.tie(NULL);
	int n, k;
	cin >> n >> k;
	vector<vector<int>>dp(n + 1, vector<int>(k + 1, 0));

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= k; j++) {
			if (j == 0 || i == j) dp[i][j] = 1;
			else dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % 10007;
		}
	}

	cout << dp[n][k] << endl;
    return 0;
}