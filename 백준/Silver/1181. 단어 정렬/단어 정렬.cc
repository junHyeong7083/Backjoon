#include<iostream>
#include<string.h>
#include<string>
#include<stdio.h>
#include<algorithm>
#pragma warning(disable:4996)
using namespace std;

int cmp(string a, string b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	else
		return a.length() < b.length();
}


string word[20000];
int main()
{
	// a b c d e f g h i j k l m n o p q r s t u v w x y z
	int n; 
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> word[i];
	}
	sort(word, word + n, cmp);
	for (int i = 0; i < n; ++i)
	{
		if (word[i] == word[i - 1])
		{
			continue;
		}
		cout << word[i] << endl;
	}


	return 0;
}