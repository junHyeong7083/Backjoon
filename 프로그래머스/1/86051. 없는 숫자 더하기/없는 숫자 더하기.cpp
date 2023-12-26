#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -1;
    int totalsum = 0;
    for(int e = 0; e < 10; ++ e)
    {
        totalsum += e;
    }
    for(int e = 0; e < numbers.size(); ++e)
    {
        totalsum -= numbers[e];
    }
    answer = totalsum;
    return answer;
}