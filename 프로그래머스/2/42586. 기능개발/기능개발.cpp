#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> pro, vector<int> speeds) 
{
    vector<int> answer;
    vector<int>check;
    
    for(int e = 0; e < pro.size(); ++e)
    {
       int cal = (100 - pro[e] + speeds[e] - 1) / speeds[e];  
        check.push_back(cal);
    }
    
    int top = check[0];
    int cnt = 1;
    
    for(int w = 1; w < check.size(); ++w)
    {
        if(top >= check[w])
        {
            cnt ++;
        }
        else
        {
            answer.push_back(cnt);
            top = check[w];
            cnt = 1;
        }
    }
      answer.push_back(cnt);
  
    
    return answer;
}