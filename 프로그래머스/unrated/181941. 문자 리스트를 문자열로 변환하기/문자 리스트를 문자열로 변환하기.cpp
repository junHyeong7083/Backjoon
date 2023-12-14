#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string answer = "";
    for(int e = 0; e < arr.size(); ++e)
    {
        answer += arr[e];
    }
    return answer;
}