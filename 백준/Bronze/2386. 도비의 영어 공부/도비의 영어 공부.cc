#include <iostream>
#include<string>
#include<string.h>

#pragma warning(disable : 4996)

using namespace std;

char sentence[251];
char a;
char c = 'c';
int main()
{
	while (true)
	{
		int check = 0;
		cin >> a;
		if (a == '#')
			break;

		getchar();
		scanf("%[^\n]s", sentence);

		int len = strlen(sentence);
		for (int i = 0; i < len; ++i)
		{
			sentence[i] = tolower(sentence[i]);
		}
		for (int j = 0; j < len; ++j)
		{
			if (a == sentence[j])
				check++;
		}


		cout << a << " " << check << endl;

	}



	return 0;
}