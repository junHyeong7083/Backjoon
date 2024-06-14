#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    map<string,int>ma;
    for(int e = 0; e < participant.size(); ++e)
     ma[participant[e]]++;
    
    for(int e = 0; e < completion.size(); ++e)
     ma[completion[e]] --;
    
      for (auto itr = ma.begin(); itr != ma.end(); itr++) 
      {
        if (itr->second != 0)
        {
            answer = itr->first;
            break;
        }
     }


    return answer;
}