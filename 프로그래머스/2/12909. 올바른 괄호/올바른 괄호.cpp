#include<string>
#include <iostream>
#include<stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    stack<char>stk;
   for(char& ch : s)
   {
      if(ch == '(')
          stk.push(ch);
       else
       {
           if(stk.empty())
           {
               answer = false;
               stk.push(ch);
               break;
           }
           else
               stk.pop();
       }
        
   }
    if(stk.empty())
        answer = true;
    else
        answer = false;
       

    return answer;
}