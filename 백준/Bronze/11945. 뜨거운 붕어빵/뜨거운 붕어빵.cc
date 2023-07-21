#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
char input[11];
int main() 
{
	int t, n;
	cin >> t >> n;
	while (t--)
	{
		for (int i = 0; i < n; ++i)
		{
			cin >> input[i];
		}
		for (int j = n-1; j >=0; --j)
		{
			cout << input[j];
		}
		
		cout << endl;

	}
	return 0;
}