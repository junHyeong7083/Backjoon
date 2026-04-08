#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)

int arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
	int x, y, day = 0;
	scanf("%d %d", &x, &y);

	for (int i = 1; i < x; ++i)
	{
		day += arr[i-1];
	}
	day += y;

	switch (day % 7)
	{
	case 0:
		printf("SUN\n");
		break;
	case 1:
		printf("MON\n");
		break;
	case 2:
		printf("TUE\n");
		break;
	case 3:
		printf("WED\n");
		break;
	case 4:
		printf("THU\n");
		break;
	case 5:
		printf("FRI\n");
		break;
	case 6:
		printf("SAT\n");
		break;
	}

	return 0;
}