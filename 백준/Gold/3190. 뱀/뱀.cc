#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
using namespace std;

#define MAX_V 101
int N, K;

int map[MAX_V][MAX_V];
int dirX[4] = {0, 1, 0, -1};
int dirY[4] = {-1, 0, 1, 0};
// 시계방향으로 구현

int main() {
  /*
  n*n 정사각형 보드
  맨위 맨좌측(0,0)
  뱀의 초기길이 1
  매초마다 이동
  초기 방향은 오른쪽

  이동 규칙
  1. 머리를 다음칸에 위치
  // 이동하는 방향 +1 or -1
  2. 벽이나 자기자신의 몸과 부딪히면 끝
  3. 사과가 있다면 꼬리의 위치이동x
  // 길이가 늘음
  4. 사과가 없으면 꼬리의 위치이동
  // 길이 변함x

  보드크기 n
  사과의 개수 k
  사과의 좌표 행,열 순서

  l개의 줄에 방향정보
  x초 c로 주어짐

  x초뒤에 c방향으로 회전
  L - 왼쪽으로 90도 회전
  D - 오른쪽으로 90도회전
  게임이 몇초에 끝이나는가?
  */
  cin >> N >> K;
  for (int e = 0; e < K; ++e) {
    int y, x;
    cin >> y >> x;

    map[y][x] = 2; // 사과가 있는곳은 1
  }
  int l;
  cin >> l;
  queue<pair<int, char>> qu;
  for (int e = 0; e < l; ++e) {
    int x;
    char c;
    cin >> x >> c;

    qu.push(make_pair(x, c));
  }

  deque<pair<int, int>> dq;

  dq.push_back(make_pair(1, 1));
  // 뱀의 시작위치
  map[1][1] = 1;
  int timer = 0;
  int diridx = 1; // 방향을 설정할 인덱스

  while (true) {
    timer++;
    int nx = dq.back().second + dirX[diridx];
    int ny = dq.back().first + dirY[diridx];

    if (nx <= 0 || ny <= 0 || nx > N || ny > N || map[ny][nx] == 1)
      break;

    if (map[ny][nx] != 2) 
    {
      map[dq.front().first][dq.front().second] = 0;
      dq.pop_front();
    }
    map[ny][nx] = 1;
    dq.push_back(make_pair(ny, nx));

    if (timer == qu.front().first) {
      if (qu.front().second == 'L')
        diridx = (diridx + 3) % 4;
      else
        diridx = (diridx + 1) % 4;
      qu.pop();
    }
  }
  cout << timer;

  return 0;
}
