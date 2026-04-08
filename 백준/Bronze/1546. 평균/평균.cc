#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int n; // 과목의 개수

	double avg = 0; // 최대값 평균
	double max = 0;

	double arr[1000];  // 배열의 한도 정함
	scanf("%d", &n); // n값 입력

	for (int i = 0; i < n; ++i)
	{
		scanf("%lf", & arr[i]);
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	for (int k = 0; k < n; ++k) 
	{
		arr[k] = arr[k] / max * 100;
		avg += arr[k];
	}
	


	printf("%.2lf", avg/(double)n );
	

	return 0;
}
