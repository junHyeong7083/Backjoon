#include <iostream>
#include <stack>
#include<stdio.h>
using namespace std;
#pragma warning(disable : 4996)
int main() {
    int n;
    scanf("%d", &n);

    stack<int> s;
    for (int e = 0; e < n; ++e)
    {
        int input;
        scanf("%d", &input);

        if (input == 1)
        {
            int X;
            scanf("%d", &X);
            s.push(X);
        }
        else if (input == 2)
        {
            if (!s.empty())
            {
                printf("%d\n", s.top());
                s.pop();
            }
            else
            {
                printf("-1\n");
            }
        }

        else if (input == 3)
        {
            printf("%d\n", s.size());
        }
        else if (input == 4)
        {
            if (s.empty())
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else if (input == 5)
        {
            if (!s.empty())
            {
                printf("%d\n", s.top());
            }
            else
            {
                printf("-1\n");
            }
        }
    }

    return 0;
}
