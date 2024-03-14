#include <iostream>
#include <stack>
#include <string>

using namespace std;

int check(char op) 
{
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    return 0; 
}

string Fix(string str) {
    stack<char> st;
    string res = "";

    for (int i = 0; i < str.length(); i++)
    {
      // isalnum : 영문자or숫자만 리턴
      if (isalnum(str[i])) 
      { 
          res += str[i];
      } 
      else if (str[i] == '(')
      { 
          st.push(str[i]);
      } 
      else if (str[i] == ')') 
      { 
        while (!st.empty() && st.top() != '(')
        {
            res += st.top();
            st.pop();
        }
        st.pop(); // ( delete
      } 
      else 
      { 
        while (!st.empty() && check(st.top()) >= check(str[i]))
        {
          res += st.top();
          st.pop();
        }
        st.push(str[i]);
      }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }

    return res;
}

int main()
{
    string str;
    cin >> str;

    string postfix = Fix(str);
    cout << postfix << endl;

    return 0;
}
