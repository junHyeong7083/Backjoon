#include <stdio.h>

#pragma warning(disable : 4996)

int main()
{
    int n, x, j;

    scanf("%d %d", &n, &x);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &j);

        if (j < x)
        {
            printf("%d ", j);
        }
    }

    return 0;
}