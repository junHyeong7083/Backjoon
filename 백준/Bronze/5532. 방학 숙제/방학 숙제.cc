#include <stdio.h>
#include<iostream>
#include<string>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	int L, A, B, C, D; // A - 국어 총량 , B - 수학총량, C - 국어 일일최대량, D - 수학 일일 최대량
	scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);

	int Kor = 0, Mat = 0, ans = 0;
	if (A % C == 0)
		Kor = A / C;
	else
		Kor = A / C + 1;
	if (B % D == 0)
		Mat = B / D;
	else
		Mat = B / D + 1;
	if (Kor == Mat)
	{
		ans = Kor;
	}
	else if (Kor > Mat)
	{
		ans = Kor;
	}
	else
		ans = Mat;


	printf("%d", L -ans);

	return 0;
}