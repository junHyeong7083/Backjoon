#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
		int N;
		cin >> N;

		int i = 1;

		while (N > i) {
			N -= i;
			i++;
		}

		if (i % 2 == 1)
			cout << i + 1 - N << '/' << N << endl;
		else
			cout << N << '/' << i + 1 - N << endl;

	return 0;
}