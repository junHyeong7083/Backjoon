#include <stdio.h>
#pragma warning(disable : 4996)

int arr[1001];

int main()
{
	int N,a = 0;
	scanf("%d" ,& N);
	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &arr[i]);
	}
	while (true)
	{
		int b = 1;
		for (int k = 1; k < N; ++k)
		{
			if (arr[k-1] > arr[k])
			{
				a = arr[k];
				arr[k] = arr[k-1];
				arr[k-1] = a;
			}
			else
				b++;
		}
		if (b == N)
			break;
	}
	for (int c = 0; c < N; ++c)
		printf("%d\n", arr[c]);
	
	
	
	return 0;
	
}