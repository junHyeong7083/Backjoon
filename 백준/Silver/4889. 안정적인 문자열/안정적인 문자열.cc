#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    /*
    항상 길이는 짝수
    */



    int currentIdx = 0;
    while (true)
    {
        string str;
        cin >> str;
        if (str[0] == '-')
            break;
        currentIdx++;
        stack<char>st;

        for (int e = 0; e < str.size(); ++e)
        {
            if (str[e] == '}' && !st.empty() && st.top() == '{')
                st.pop();
            else
                st.push(str[e]);
        }
        
        int cnt = 0;
        while (!st.empty())
        {
            char top1= st.top();
            st.pop();

            char top2 = st.top();
            st.pop();

            if (top1 == top2)
                cnt++;
            else
                cnt += 2;
        }



        cout << currentIdx << ". " << cnt << endl;
    }
     
    return 0;
}
