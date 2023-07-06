#include <iostream>
#include<string>
#include<string.h>
#pragma warning(disable : 4996)

using namespace std;

int main()
{
	int arr;
	for (int i = 0; i < 3; ++i)
	{
		int check = 0;
		for (int j = 0; j < 4; ++j)
		{
			cin >> arr;
			if (arr == 0)
				check++;
		}
		switch (check)
		{
		case 0: 
			cout << "E" << endl;
			break;
		case 1:
			cout << "A" << endl;
			break;
		case 2:
			cout << "B" << endl;
			break;
		case 3:
			cout << "C" << endl;
			break;
		default:
			cout << "D" << endl;
			break;
		}
	}

	
	return 0;
}