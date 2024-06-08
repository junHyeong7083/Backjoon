#include <string>
#include <vector>
#include <queue>
#include<iostream>
#include<utility>

using namespace std;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};




int solution(vector<vector<string>> board, int h, int w) 
{
    int answer = 0;
    int lenx = board.size();
    int leny = board[0].size();
    
    string target = board[h][w];
    // 단순히 이웃한칸?
    for(int e= 0; e < 4; ++e)
    {
        int nx = h + dx[e];
        int ny = w + dy[e];
        
        if(nx < 0 || ny < 0 || nx >= lenx || ny >= leny)
            continue;
        if(board[nx][ny] != target)
            continue;
        answer ++;
        
    }
    
    
    
    return answer;
}