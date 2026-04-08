#include <stdio.h>
int a[100001], s[100001], n, m, x,y;
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&a[i]);
        s[i] = s[i - 1] + a[i];
    }
    while (m--)
    {
        scanf("%d %d", &x, &y);
        printf("%d\n",s[y]-s[x-1]);
    }
}