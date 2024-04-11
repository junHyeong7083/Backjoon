#include <iostream>
#include <cctype>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>
#include<set>
#include<map>
#include<unordered_map>

#define all(v) v.begin(), v.end()

using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    cout << n * (n - 1);

    return 0;   
}
