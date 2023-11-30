#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int l, p;
	cin >> l >> p;
	for (int e = 0; e < 5; ++e)
	{
		int value;
		cin >> value;

		if (e != 4)
			cout <<  value- l * p  << " ";
		else
			cout << value - l * p ;
	}
	

	return  0;
}