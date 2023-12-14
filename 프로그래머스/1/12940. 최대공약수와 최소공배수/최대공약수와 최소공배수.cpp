#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    int tmp;
    while(b != 0)
    {
        tmp = a %b;
        a = b;
        b = tmp;
    }
    return a;
}


vector<int> solution(int n, int m) {
    vector<int> answer;
    int val1 = gcd(n,m);
    int val2 = (n*m) / val1;
    answer.push_back(val1);
      answer.push_back(val2);
    return answer;
}