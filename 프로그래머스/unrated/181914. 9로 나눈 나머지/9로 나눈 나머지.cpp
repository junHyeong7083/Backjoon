#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    for(int e = 0; e < number.size(); ++e)
    {
        answer += number[e] - '0';
    }
    answer %= 9;
    return answer;
}