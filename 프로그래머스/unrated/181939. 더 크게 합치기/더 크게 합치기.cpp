#include <string>
#include <vector>
using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string aa = to_string(a);
    string bb = to_string(b);
    
    string ab = aa+bb;
    string ba = bb + aa;
    
    if(ab > ba)
        answer = stoi(ab);
    else
        answer = stoi(ba);
    
    return answer;
}