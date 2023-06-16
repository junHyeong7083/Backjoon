#include <stdio.h>
#include <string.h>
#include<iostream>

using namespace std;

int main() 
{
	char input[1001];
	int n;
	cin >> input >> n;
	int len = strlen(input);
	cout << input[n-1];
	return 0;
}