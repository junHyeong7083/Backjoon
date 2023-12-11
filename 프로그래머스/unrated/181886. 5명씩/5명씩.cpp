#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> names) {
    vector<string> answer;
    for(int e = 0; e < names.size(); ++e)
    {
        if(e% 5 == 0)
            answer.push_back(names[e]);
    }
    return answer;
}