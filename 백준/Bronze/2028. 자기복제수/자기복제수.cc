#include <iostream>

using namespace std;

int main() {
	int t = 0; // testCase
	cin >> t;
	int sqr = 0; // natNum[t]의 제곱수
	int last = 0; // 맨 뒷자리의 숫자
	int numSize = 1;	// natNum[t]보다 큰 10의 제곱수의 최솟값
	// ex) natNum[t] = 13 -> numSize = 100

	for (int i = 0; i < t; i++)
	{
		int num;
		int sqr = 0; 
		int last = 0; 
		int numSize = 1;	
		// 초기화
		cin >> num;
		sqr = num * num;
		while(1)
		{
			numSize *= 10;
			if (numSize > num) break;
		}
		last = sqr % numSize;
		if (last == num) cout << "YES";
		else cout << "NO";
		cout << "\n";
	}
}