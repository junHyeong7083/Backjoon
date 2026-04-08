#include<stdio.h>
#pragma warning(disable : 4996)


int main()
{
	int H, M ; // H - 시간 M - 분
	scanf("%d %d", &H, &M);

	if (M > 60)
	{
		 H = H +(M / 60); // 60이상초과하면 시간을 1올려줌
		M = (M % 60); // 60분 넘어가면 추가된 분을 숫자올려줌
		
		
		if (H > 24)
		{
			H = 0 + (H % 24); // 24시간 이상일시 추가된 시간을 새로 더함
				
		}
	}
	if (H == 0) {
		if (M < 45) {
			H = 23; M = M + 60 - 45;
			printf("%d %d", H, M);
		}
		else if (M >= 45) {
			M = M - 45;
			printf("%d %d", H, M);
		}
	}
	else if (H > 0) {
		if (M < 45) {
			H = H - 1; M = M + 60 - 45;
			printf("%d %d", H, M);
		}
		else if (M >= 45) {
			M = M - 45;
			printf("%d %d", H, M);
		}
	}
	return 0;
	
}