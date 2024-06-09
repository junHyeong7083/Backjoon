#include <string>
#include <vector>
#include<queue>
using namespace std;
int solution(int len, int weight, vector<int> truck) {
    int answer = 0;
    /*
    len = 다리길이
    weight = 다리가 견디는 최대무게
    */
    
    queue<int>end;
    int totalCnt = truck.size();
    int currentWeight = 0;
    int truckIdx = 0;
    queue<int>bridgeState;
    while(end.size() != totalCnt)
    {
        if(bridgeState.size() == len)
        {
            if(bridgeState.front() != 0)
            {
                end.push(bridgeState.front());
                currentWeight -=bridgeState.front();  
            } 
            bridgeState.pop();
            
        }
        
        
        
        if(truckIdx <totalCnt && currentWeight + truck[truckIdx] <= weight)
        {
            bridgeState.push(truck[truckIdx]);
            currentWeight += truck[truckIdx];
            truckIdx ++;
        }
        else
        {
            bridgeState.push(0);
        }
        answer++;
    }
    
   
    return answer;
}