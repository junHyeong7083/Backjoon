#include <iostream>
#include <queue>
#include<algorithm>
using namespace std;

int R, C;

char map[51][51];
bool playerVisit[51][51];
bool waterVisit[51][51];
queue<pair<int, int>> wq;
queue<pair<int,int>> pq;
pair<int, int> targetPos;
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

int res = 0;
void BFS()
{
    while (!pq.empty())
    {
        int wqSize = wq.size();
        for (int i = 0; i < wqSize; ++i)
        {
            int curwX = wq.front().second;
            int curwY = wq.front().first;
            wq.pop();
            waterVisit[curwY][curwX] = true;
            for (int e = 0; e < 4; ++e)
            {
                int nwX = curwX + dx[e];
                int nwY = curwY + dy[e];

                if (nwX < 0 || nwY < 0 || nwX >= C || nwY >= R)
                    continue;

                if (!waterVisit[nwY][nwX] && map[nwY][nwX] == '.')
                {
                    wq.push(make_pair(nwY, nwX));
                    map[nwY][nwX] = '*';
                }
            }
        }


        int pqSize = pq.size();
        for (int j = 0; j < pqSize; ++j)
        {
            int curpX = pq.front().second;
            int curpY = pq.front().first;

            pq.pop();
            playerVisit[curpY][curpX] = true;
            for (int e = 0; e < 4; ++e)
            {
                int npX = curpX + dx[e];
                int npY = curpY + dy[e];
                if (npX == targetPos.second && npY == targetPos.first)
                {
                    res++;
                    cout << res;
                    return;
                }
                if (npY < 0 || npX < 0 || npY >= R || npX >= C)
                    continue;

                if (map[npY][npX] == '.' && !playerVisit[npY][npX])
                {
                    pq.push(make_pair(npY, npX));
                    playerVisit[npY][npX] = true;
                }

            }
        }
        res++;
    }
    cout << "KAKTUS";
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> R >> C;


    for (int i = 0; i < R; ++i)
    {
        for (int j = 0; j < C; ++j) 
        {
            cin >> map[i][j];
            if (map[i][j] == 'S') 
            {
                pq.push(make_pair(i, j));
            }
            else if (map[i][j] == 'D') 
            {
                targetPos = make_pair(i, j);
            }
            else if (map[i][j] == '*') 
            {
                wq.push(make_pair(i, j));
            }
        }
    }
    BFS();

    return 0;
}