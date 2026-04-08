#include<bits/stdc++.h>
using namespace std;

int main()
{
	int K, Q, L, B, N	, P;
	cin >> K >> Q >> L >> B >> N >> P;

	cout << 1 - K << " " << 1 - Q << " "
		<< 2 - L << " " << 2 - B << " " << 2 - N << " " << 8 - P;
	return 0;
}