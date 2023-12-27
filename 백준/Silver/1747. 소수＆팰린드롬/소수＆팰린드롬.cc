#include <iostream>
#include <stack>
#include<queue>
#include<vector>
#include<string>
using namespace std;

bool isPrime[1003002];

void estro() {
	for (int i = 2; i <= 1003002; i++) {
		isPrime[i] = true;
	}
	isPrime[0] = false;
	isPrime[1] = false;
	for (int i = 2; i <= 1003002; i++) {
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				isPrime[i] = false;
				break;
			}
		}
	}
}

bool isSame(int N) {
	string s = to_string(N);
	int size = s.size();
	for (int i = 0, j = size - 1; i < size, j >= 0; i++, j--) {
		if (s[i] != s[j]) return false;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	estro();
	for (int i = N; i <= 1003002; i++) {
		if (isPrime[i] && isSame(i)) {
			cout << i << "\n";
			break;
		}
	}
	return 0;
}
