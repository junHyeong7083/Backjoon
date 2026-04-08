#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)

char MyArray[1000000];
int main()
{
	
	// 배열에서 널값의 개수 +1이 정답
	scanf("%[^\n]s", MyArray);
	int cnt = 0,len = strlen(MyArray);
	char a = ' ';
	bool isNull = true;

	for (int i = 0; i < len; ++i)
	{
		if (MyArray[0] == a) {
			if (MyArray[len - 1] == a) {
				if (MyArray[i] == a && len -1 != i) {
					cnt++;
				}
			}
			else {
				if (MyArray[i] == a) {
					cnt++;
				}
			}
		}
		else {
			if (MyArray[len - 1] == a) {
				if (MyArray[i] == a) {
					cnt++;
				}
			}
			else {
				if (MyArray[i] == a || len - 1 == i) {
					cnt++;
				}
			}
		}

	}

	printf("%d", cnt);
	return 0;
}


