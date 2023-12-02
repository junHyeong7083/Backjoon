#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string input;
	cin >> input;
	int total = n + 1;
	for (int e = 0; e < input.length(); ++e)
	{
		if (input[e] == 'L')
		{
			total--;
			e++;
		}
	}
	if (total > n)
		total = n;
	cout << total;


	return 0;
}