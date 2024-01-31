#include <string>
#include <vector>

using namespace std;
 vector<vector<int>> answer;
void Hanoi(int n, int from, int by, int to)
{
    if(n==0)
        return;
    Hanoi(n-1,from, to, by);
    answer.push_back({from, to});
    Hanoi(n-1,by, from, to);
}



vector<vector<int>> solution(int n) {
    for(auto e : answer)
        e.clear();
    
    Hanoi(n,1,2,3);
    return answer;
    
}