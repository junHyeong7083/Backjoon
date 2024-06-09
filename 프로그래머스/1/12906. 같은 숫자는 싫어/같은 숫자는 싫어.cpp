#include <vector>
#include <iostream>
#include<stack>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    stack<int>st;
    
    st.push(arr[0]);
    answer.push_back(arr[0]);
    for(int e =0 ; e < arr.size(); ++e)
    {
        if(st.top() != arr[e])
        {
            answer.push_back(arr[e]);
        }
        
        st.push(arr[e]);
    }
    return answer;
}