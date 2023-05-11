#include<iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int arr[101] = { 0 };
    for (int i = 1; i <= n; ++i)
    {
        arr[i] = i;
    }
    while (m--)
    {
        int a, b,temp = 0;
        cin >> a >> b;
        temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
    for (int i = 1; i <= n; ++i)
    {
        cout  << arr[i]<< " ";
    }

    return 0;
}