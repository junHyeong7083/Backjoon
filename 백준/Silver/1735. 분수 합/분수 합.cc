#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
/*
인류 최초의 알고리즘이라고 알려진 유클리드 호제법은 최대공약수를 구하는 알고리즘이다.
유클리드 호제법은 2개의 자연수(또는 정식) a, b에 대해서 a를 b로 나눈 나머지를 r이라 하면(단, a>b),
a와 b의 최대공약수는 b와 r의 최대공약수와 같다는 알고리즘으로 그림으로 표현하면 아래와 같다.*/

int gcd(int a, int b)
{
	while (b != 0)
	{
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main()
{
	int a1, a2, b1, b2;
	cin >> a1 >> a2 >> b1 >> b2;
	// 최악의 경우 a1 : 30000 b1 : 30000  = > 9억 int o

	int bottom = a2 * b2;
	int top = a1 *b2 +  a2 *b1;

	int bb = bottom;
	int tt = top;

	gcd(top, bottom);
	cout << top / gcd(top, bottom) << " " << bottom / gcd(top, bottom);
	
	return  0;
}