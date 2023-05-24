#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char sentence[101];
	cin >> sentence;
	int len = strlen(sentence);
	bool isCheck = false;
	for (int i = 0; i < len / 2; ++i)
	{
		if (sentence[i] != sentence[len -1- i])
		{
			isCheck = true;
			break;
		}
	}
	if (!isCheck)
		cout << "1";
	else if (isCheck)
		cout << "0";

	return 0;
}