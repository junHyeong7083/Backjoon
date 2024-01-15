#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>
#include<cmath>
using namespace std;


bool isPrime(long long  num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

long long  findPrime(long long  num) {
    while (!isPrime(num)) {
        ++num;
    }
    return num;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	std::cout.tie(NULL);
    long long   t;
    cin >> t;
    while (t--)
    {
        long long  n;
        cin >> n;
        cout << findPrime(n) << endl;

    }
    return 0;
}