#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<utility>
#include<limits>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);
   
   /*
    1. s+= a
    2. reverse  s+=b

    target => str로 변경가능한가?
   */
    string str;
    string target;
    cin >> str >> target;

    bool isPos = false;
    while (target.size() > 0) {
        if (target.back() == 'A') {
            target.pop_back();  
        }
        else {
            target.pop_back();  
            reverse(target.begin(), target.end()); 
        }
        if (str == target) {
            isPos = true;
            break;
        }
    }

    if(!isPos)
        cout << "0";
    else
        cout << "1";

    return 0;
}