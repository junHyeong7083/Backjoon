#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <string.h>
#include <stdio.h>
#define MAX_SIZE 1000

using namespace std;
int main()
{
	int h1, m1, s1, h2, m2, s2;
	char check;
	cin >> h1 >> check>> m1 >> check >> s1  >> 
		h2 >> check>>  m2 >> check >> s2;

	
	h2 -= h1;
	m2 -= m1;
	s2 -= s1;

	if (s2 < 0)
	{
		s2 += 60;
		m2--;
	}
	if (m2 < 0)
	{
		m2 += 60;
		h2--;
	}
	if (h2 < 0)
	{
		h2 += 24;
	}

	printf("%02d:%02d:%02d", h2, m2, s2);

	return 0;
}