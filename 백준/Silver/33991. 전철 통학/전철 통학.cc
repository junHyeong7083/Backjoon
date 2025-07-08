#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int x1, y1, x2, y2, x3, y3;
	int q;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	cin >> q;

	while (q--)
	{
		/*
		현재 자신의위치 x,y
		
		신촌역 t1 대흥역 t2 서강대역 t3

		각 전철의 정차시간 1분 미만
		
		
		
		신촌역 x1 y1 
		대흥역 x2 y2
		서강대역 x3 y3
		*/
		int x, y, t1, t2, t3;
		cin >> x >> y >> t1 >> t2 >> t3;

		int sinchon = 0, daeheung = 0, sogang = 0;
		sinchon = abs(x - x1) + abs(y - y1);
		daeheung = abs(x - x2) + abs(y - y2);
		sogang = abs(x - x3) + abs(y - y3);

		if (sinchon % t1 != 0)
			sinchon += t1-( sinchon % t1);
		if (daeheung % t2 != 0)
			daeheung +=t2- (daeheung % t2);
		if (sogang % t3 != 0)
			sogang +=t3- (sogang % t3);


		int res = min(min(sinchon, daeheung), sogang);


		cout << res << "\n";
	}


	return 0;
}