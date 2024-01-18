#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    cin >> n;
    
    string s1 = "YONSEI";
    string s2 = "Leading the Way to the Future";
     n % 2 == 0 ? cout << s1: cout <<s2;

    return 0;

}
