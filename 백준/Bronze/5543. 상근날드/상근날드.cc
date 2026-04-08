#include <stdio.h>
#pragma warning(disable : 4996)

int input[5];
int main()
{
    int a = 0, b = 0;
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &input[i]);

    }
    if (input[0] < input[1])
        a = input[0];
    else
        a = input[1];

    if (a < input[2])
        a = a;
    else
        a = input[2];


    if (input[3] < input[4])
        b = input[3];
    else
        b = input[4];


    printf("%d", a + b - 50);

    return 0;
}