#include <iostream>
#include <cstring>

using namespace std;
int main(void){
  char S[1001];
  cin >> S;
  int len=strlen(S);
  bool correct;
  for(int i=0; i<len; i++){
    correct=true;
    for(int j=i; j<len; j++){//펠린드롬 검사 
      if(S[j]!=S[len-1-(j-i)]){
        correct = false;
        break;
      }		 
    }
    if(correct){
      cout << len + i;
      break;
    }
  }

  return 0;
}