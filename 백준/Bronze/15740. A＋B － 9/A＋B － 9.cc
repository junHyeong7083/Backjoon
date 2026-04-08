#include<stdio.h>
#include<string.h>
#pragma warning(disable :  4996)



void reverse(char arr[])
{
	int len = strlen(arr);  // len은 입력받을(arr문자열의 길이)
	for (int i = 0; i < len / 2; ++i)
	// 절반 초과일땐 그전에 뒤집었던게 다시 돌아오기 때문에 절반까지만 확인한다
	{
		char temp = arr[i];
		arr[i] = arr[len - i - 1];	
		arr[len - i - 1] = temp;  // arr문자열의 시작부분과 끝부분을 바꿔주는곳
									   // arr(len - i - 1)의 이유 : 마지막엔 \0값이 들어가기 때문에
	}
}

int main()
{
	char A[10002] = { 0 }, B[10002] = { 0 };
	char Result[10003] = { 0 };
	scanf("%s %s", &A, &B);
	
	reverse(A);
	reverse(B);  // 둘다 변경

	int len = 0;
	len = strlen(A) > strlen(B) ? strlen(A) : strlen(B);
	// len = max(strlen(A), strlen(B)); 이러한 방법도 있다

	int up = 0;
	for (int i = 0; i < len; ++i)
	{
		int sum = A[i] - '0' + B[i] - '0' + up; 
		if (sum < 0)
			sum += '0';
		if (sum > 9) // 합이 10보다 클때
			up = 1;   // 자리수 1 올림
		else
			up = 0; // 합이 10보다 크지 않을 때
		Result[i] = sum % 10 + '0'; // ex) sum이 12일때 up으로 1을 올리고 2를 꺼내기 위해
	}

	if (up == 1)
	{
		Result[len] = '1'; // 마지막 합에 자리수가 올라가면 표기를 해 주기 위해
	}
	reverse(Result);
	printf("%s ", Result);

	return 0;
}