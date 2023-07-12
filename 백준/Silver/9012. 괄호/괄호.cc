#include <stdio.h>
#include <string.h>

char str[51]; // 하나는 널문자 여유.. ㅎㅎ
int N;

int main() {
    int value = 0; // 항상 0보다 크거나 같음을 유지하면서 반복문을 돌아야함.
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {

        value = 0;
        scanf("%s", str);

        for(int j = 0; j < strlen(str); j++) {

            if(value < 0)
                break;

            if(str[j] == '(')
                value++;
            if(str[j] == ')')
                value--;


        }
        if(value == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
