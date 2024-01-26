#include <string>
#include <vector>
#include<algorithm>
#include<sstream>
#include<map>
using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int answer = 0;
    
    /*
    1) 선물받은 기록 o
    차이가 존재
    둘중 더많은 선물을 준 사람이 하나 받기
    같을때
    이때까지 선물을 준 개수 - 받은개수 비교 더 높은사람이 선물하나받기

    2) 기록 x
    이때까지 선물을 준 개수 - 받은개수 비교 더 높은사람이 선물하나받기
    
    
    만약 선물지수도 같다 => 다음달 선물 x
    
    */
    int fSize = friends.size();
    vector<vector<int>> giftCount (fSize, vector<int> (fSize, 0)); //주고받은 선물
    vector<int> giftFactor (fSize,0); //선물 지수
    vector<int> giftRank (fSize,0); // 다음달 받을 선물 개수
    
    //친구들의 인덱스와 이름 매칭
    map<string,int> friendsMap;
    for(int i=0; i<fSize; i++){
        friendsMap.insert({friends[i],i});
    }
    
    for(string s : gifts){
        string first,second;
        stringstream ss (s);
        
        ss >> first >> second;
        
        
        giftCount[friendsMap[first]][friendsMap[second]]++;
        giftFactor[friendsMap[first]]++;
        giftFactor[friendsMap[second]]--;
        
    }
    int max = 0;
    for(int i=0; i<fSize; i++){
        for(int j=0; j<fSize; j++){
            if(i != j){
                if(giftCount[i][j] > giftCount[j][i]){
                    giftRank[i]++;
                    if(giftRank[i]> max){
                        max = giftRank[i];
                    }
                }
                else if(giftCount[i][j] == giftCount[j][i]){
                    if(giftFactor[i] > giftFactor[j]){
                        giftRank[i]++;
                        if(giftRank[i]>max){
                            max = giftRank[i];
                        }
                    }
                }
            }
        }
    }
    
    return max;
    
    
}