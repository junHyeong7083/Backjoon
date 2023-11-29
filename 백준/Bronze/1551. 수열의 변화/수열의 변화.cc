#include <iostream>
#include <vector>
#include<stdio.h>
#pragma warning(disable : 4996)
using namespace std;

int main() {
    int n, k, arr[20];
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (i != n - 1) {
            char comma;
            scanf("%c", &comma);
        }
    }

    vector<int> v1(arr, arr + n);

    while (k--) {
        vector<int> v2(n - 1);
        for (int e = 0; e < n - 1; ++e) {
            v2[e] = v1[e + 1] - v1[e];
        }

        v1 = v2;
        n--;
    }

    for (int e = 0; e < n; ++e) {
        cout << v1[e];
        if (e != n - 1)
            cout << ",";
    }

    return 0;
}
