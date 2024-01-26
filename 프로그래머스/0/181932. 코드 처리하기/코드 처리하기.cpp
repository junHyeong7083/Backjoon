#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    bool mode = false;
    for(int e = 0; e < code.size(); ++e)
    {
        if(!mode) // 0
        {
            if(e%2 == 0 && code[e] != '1')
                answer+=code[e];
            
            if(code[e] == '1')
            {
                mode = true;
                continue;
            }
             
        } 
        else // 1
        {
            if(e%2 == 1 && code[e] != '1')
                answer+=code[e];
            
            if(code[e] == '1')
            {
                mode = false;
                continue;
            }
        }
    }
    if(answer.empty())
        answer = "EMPTY";
    
    return answer;
}