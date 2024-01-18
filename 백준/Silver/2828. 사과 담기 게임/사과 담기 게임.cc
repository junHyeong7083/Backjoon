#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

    int n,m,j;
    cin >> n >> m >> j;

	int l = 1, r;
	int res = 0;
	for (int e = 0; e < j; e++) {
		r = l + m - 1;
		int x;
		cin >> x;
		if (x >= l && x <= r) continue;
		if (l > x) {
			res += l - x;
			l = x;
		}
		else if (l < x) {
			res += x - r;
			l += x - r;
		}
	}
	cout << res << '\n';

	return 0;
}