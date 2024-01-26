#include <string>
#include <vector>
#include<algorithm>
using namespace std;

string solution(string ms, int n) {
    string answer = "";
    
    reverse(ms.begin(), ms.end());
    for(int e = 0; e < n; ++e)
    {
        answer+=ms[e];
    }
      reverse(answer.begin(), answer.end());
    return answer;
}