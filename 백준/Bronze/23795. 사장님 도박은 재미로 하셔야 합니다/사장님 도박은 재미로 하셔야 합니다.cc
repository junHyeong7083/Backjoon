#include<iostream>
#include<unordered_map>
using namespace std;
 
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int sum = 0;
	while (1)
	{
		int n;
		cin >> n;

		if (n ==-1)
			break;

		sum += n;
	}
	cout << sum;

	return 0;
}