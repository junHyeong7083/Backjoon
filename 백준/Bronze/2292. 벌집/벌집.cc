#include<iostream>
#include<stdlib.h>
#include<malloc.h>
using namespace std;
/*
 1+ 6*1					 : 1
 1+ 6*2					 : 2
 1+ 6*2 + 6*3		     : 3
 1+ 6*2 + 6*3 + 6*4  : 4
*/
int main()
{
	int n, x= 0, y = 0,cnt =0 ;
	cin >> n;
		while (true)
		{
			if (n <= 6 * x+1)
			{
				cnt = y + 1;
				break;
			}
			y++;
			x += y;
		}


	cout << cnt;

	return 0;
}