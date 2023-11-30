#include <iostream>
#include<string>
#include<math.h>
using namespace std;

void Hanoi(int n, int from, int mid, int to)
{
	if (n == 1)
	{
		cout << from << " " << to << "\n";
		return;
	}
	else
	{
		Hanoi(n - 1, from, to, mid);
		cout << from << " " << to << "\n";
		Hanoi(n - 1, mid, from, to);
	}
}


int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	string s = to_string(pow(2, n));
	int findd = s.find('.');
	s = s.substr(0, findd);
	s[s.length() - 1] -= 1;
	cout << s << "\n";
	// 재귀적 문제 : 한단계 낮은 문제가 해결되면 그것을 바탕으로 답 얻기가능
	if(n <= 20)
		Hanoi(n, 1, 2, 3);

	return 0;
}