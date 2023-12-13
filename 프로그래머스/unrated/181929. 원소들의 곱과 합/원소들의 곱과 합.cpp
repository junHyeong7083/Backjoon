#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int v1 = 1, v2 = 0;
    for(int e =0; e < num_list.size(); ++e)
    {
        v1 *= num_list[e];
        v2+= num_list[e];
    }
    if(v1 > v2*v2)
        answer = 0;
    else
        answer= 1;
    return answer;
}