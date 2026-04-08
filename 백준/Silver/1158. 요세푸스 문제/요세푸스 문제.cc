#include<stdio.h>
#include<iostream>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
    int N, K, check[5002] = { 0, }, cur;
    cin >> N >> K;
    cur = K;
    printf("<%d", cur); // 처음에 빠지는 숫자
    check[cur] = 1; // 빠진 숫자는 1
    int cnt = 0;
    for (int i = 0; i < N - 1; i++)  // 0부터 시작하니 n-1 / n까지 반복하는 반복문
    {
        
        for (int j = 0; j < K; j++) //  K번 이동
        {
            while (1) 
            {
                cur++;
                if (cur > N) cur = 1;
                if (!check[cur] ) break;
            }
        }
        printf(", %d", cur);
        check[cur] = 1;
    }
    printf(">");

    return 0;
}