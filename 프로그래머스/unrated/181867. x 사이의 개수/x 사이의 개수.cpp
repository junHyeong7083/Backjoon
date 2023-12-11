#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int cnt = 0;
    for(int e = 0; e < myString.length(); ++e)
    {
       if(myString[e] =='x')
       {
           answer.push_back(e- cnt);
           cnt = e+1;
       }
       
    }
    answer.push_back(myString.length() - cnt);
    return answer;
}