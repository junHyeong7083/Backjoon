#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n;
	cin >> n;
	int answer = 0;
	for (int i = 1; ; ++i)
	{
		n -= i;
		answer = i;
		if (n - i <= 0)
			break;
	}
	cout << answer << endl;
	
	return 0;
}
