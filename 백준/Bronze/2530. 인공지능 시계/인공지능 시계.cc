#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int hour, minute, second, input;
	cin >> hour >> minute >> second >> input;
	second = second + input;
	minute +=  second / 60;
	second = second % 60;
	hour += minute / 60;
	minute = minute % 60;
	if (hour > 23)
		hour = hour % 24;
	cout << hour << " " << minute << " " << second;


	return 0;
}