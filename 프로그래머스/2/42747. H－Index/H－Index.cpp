#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int solution(vector<int> v) {
    int answer = 0;
    /*
    논문 n편 중 h번이상 인용된 논문이 h편이상
    
    정렬후 중간값 탐지
    */
    sort(v.begin(), v.end(), [](const auto&a, const auto&b){
        return a >b;
    });
    if(v[0] == 0) answer = 0;
    else
    {
        for(int e = 0; e < v.size(); ++e)
        {
            if(v[e] > e)
                answer ++;
        }
    }
    return answer;
}