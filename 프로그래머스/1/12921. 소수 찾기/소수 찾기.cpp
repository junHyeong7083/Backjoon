#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int>v;
    for(int e = 2; e<=n; ++e)
    {
        v.push_back(e);
        v[e] = 1;
    }
    for(int e =2 ; e<= n; ++e)
    {
        if(v[e] == 0)
            continue;
        
        for(int q = e*2; q<=n; q+=e)
        {
            v[q] = 0;
        }
    }
       
    for(int e= 2; e<=n; ++e)
    {
        if(v[e] != 0)
            answer++;
    }
    
    return answer;
}