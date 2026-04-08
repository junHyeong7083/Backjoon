#include<string>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	int a, b,n = 10, sum = 0, max = 0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d %d", &a, &b);
		sum -= a;
		sum += b;
		if (max < sum)
			max = sum;
	}

	printf("%d", max);

	return 0;
}