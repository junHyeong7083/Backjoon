#include<bits/stdc++.h>
using namespace std;
#pragma warning(disable : 4996)

int main()
{
	char JaHwan[1000];
	char Doctor[1000];

	cin >> JaHwan >> Doctor;
	int len1 = strlen(JaHwan);
	int len2 = strlen(Doctor);

	bool Go = true;

	Go =	len1 >= len2 ? 1 : 0;
	if (Go == true)
		cout << "go" << endl;
	else
		cout << "no" << endl;
}