#include <iostream>
#include <vector>
#include<queue>
#include<cmath>
using namespace std;

/*
    주사위 각 면 1~6
    10*10
    1~100까지 숫자가 하나씩
    ex 
    player i번쨰칸 나온수4
    i+4칸으로 이동
    만약 i+? >100 이동 x
    도착한 칸이 사다리면 사다리 타고 위로 이동
    뱀이 존재하는칸은 뱀을 따라 아래로
*/

int map[102];
int dist[102];
bool visited[101] = { false };
int dice[6] = { 1,2, 3,4,5,6 };
queue<int> playerPos;

void BFS()
{
    while (!playerPos.empty())
    {
        int currentPos = playerPos.front();
        playerPos.pop();

        if (currentPos == 100)
            break;

        for (int e = 0; e < 6; ++e)
        {
            int nextPos = currentPos + dice[e];

            if (map[nextPos] != 0)
                nextPos = map[nextPos];


            if (nextPos > 100 || visited[nextPos])
                continue;

            dist[nextPos] = dist[currentPos] + 1;
            visited[nextPos] = true;
            playerPos.push(nextPos);
        }
    }
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    /*
    사다리 n , 뱀 m
    (x, y) 사다리 정보
    x번칸 도착하면 y로 이동
    
    u,v(뱀의 정보)
    u로 가면 v로 이동

    1, 100번칸은 사다리, 뱀의 시작x
    동시에 두 가지를 모두 가지고 있는 경우는 없다
    */
    int n, m;
    cin >> n >> m;
    
    for (int e = 1; e <= 100; ++e)
    {
        map[e] = 0;
    }


    for (int e = 0; e < n; ++e)
    {
        int x, y;
        cin >> x >> y;
        map[x] = y;
    }

    for (int e = 0; e < m; ++e)
    {
        int x, y;
        cin >> x >> y;
        map[x] = y;
    }
    // bfs하다가 map[현재층]값이 0이 아니면 뱀 or 사다리
    // 해당값으로 바로 이동해주기!


    playerPos.push(1);
    BFS();
    cout << dist[100];
   

    return 0;
}