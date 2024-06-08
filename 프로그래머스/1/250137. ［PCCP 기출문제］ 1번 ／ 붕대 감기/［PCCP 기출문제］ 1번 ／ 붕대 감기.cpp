#include <string>
#include <vector>

using namespace std;

int solution(vector<int> b, int health, vector<vector<int>> atk) {
   /*
   t초동안 붕대를 감으면서 1초마다 x의 체력 획득
   t초 연속으로 붕대감기 성공하면 y의 추가 체력 획득
   
   만약 현재체력 >= 최대체력 => 현재체력 = 최대체력
   
   붕대를 감다가 공격받으면 기술취소 -> 그 순간의 체력회복x / 연속 성공시간 0으로 초기화 /
                                    몬스터의 피해량 만큼 체력감소
   
   모든 공격이 끝나고 남은 체력 return 
   죽으면 -1
   
   b[0] = 시전시간
   b[1] = 초당회복량
   b[2] = 추가회복량
   
   최대체력 health
   
   attacks[0][0] = 공격시간
   attacks[0][1] = 피해량 
   */
    
    int bandgoal= b[0];
    int healsecond = b[1];
    int bonusheal  = b[2];
    int maxhp = health;
    
    int atkidx = 0;
    int time = 0;
    int bandtime = 0;
    bool isdie = false;
    while(atkidx < atk.size() && health>0)
    {
        if(time == atk[atkidx][0])
        // atk
        {
            health -= atk[atkidx][1];
            bandtime = 0;
            atkidx ++;
        }
        else
        {
            bandtime ++;
            health += healsecond;
            
            if(bandtime == bandgoal)
            {
                health += bonusheal;
                bandtime = 0;
            }
            
            if(health > maxhp)
                health  = maxhp;
        }
        
        if(health<= 0)
            isdie = true;
        
        time ++;
    }
    
    if(isdie)
        return -1;
    else
        return health;
   
}