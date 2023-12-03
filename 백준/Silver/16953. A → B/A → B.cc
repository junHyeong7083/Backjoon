#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	int n, target;
	cin >> n >> target;

	int check = 0;
	bool isCan = true;
	while (n != target)
	{
		if (n > target)
		{
			isCan = false;
			break;
		}

		if (target % 10 == 1)
		{
			target--;
			target /= 10;
		}
		else if (target % 2 == 0)
		{
			target /= 2;
		}
		else
		{
			isCan = false;
			break;
		}
		
		check++;
	}
	if (!isCan)
		cout << "-1";
	else
		cout << check + 1;

	return 0;
}
