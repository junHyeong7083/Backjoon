#include <iostream>
#include <stack>
using namespace std;

int map[50][50];
int visited[50][50];

// 위로가면 y가 -1
int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };

int main()
{
    int N, M;
    cin >> N >> M;
    int r, c, d;
    cin >> r >> c >> d;

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            cin >> map[i][j];
            visited[i][j] = 0;
        }
    }

    int res = 0;
    stack<pair<pair<int, int>, int>> st;
    st.push({ {r, c}, d });
    visited[r][c] = 1;
    res++;

    while (!st.empty())
    {
        int cury = st.top().first.first;
        int curx = st.top().first.second;
        int curd = st.top().second;
        st.pop();

        bool move = false;
        for (int i = 0; i < 4; i++)
        {
            int nd = (curd + 3 - i) % 4;
            int ny = cury + dy[nd];
            int nx = curx + dx[nd];

            if (ny < 0 || ny >= N || nx < 0 || nx >= M || map[ny][nx] == 1 || visited[ny][nx] == 1)
                continue;

            visited[ny][nx] = 1;
            res++;
            st.push({ {ny, nx}, nd });
            move = true;
            break;
        }

        if (!move)
        {
            int back = (curd + 2) % 4;
            int by = cury + dy[back];
            int bx = curx + dx[back];

            if (by >= 0 && by < N && bx >= 0 && bx < M && map[by][bx] == 0)
                st.push({ {by, bx}, curd });
            else
                break; 

        }
    }
    cout << res << endl;

    return 0;
}
