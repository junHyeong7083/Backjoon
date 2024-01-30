#include<iostream>
#include<algorithm>

using namespace std;

int alphabet[26] = {0,};
char graph[21][21] = {0,};
int r,c;
int result = 0;
int y[4] = {0,0,-1,1};
int x[4] = {-1,1,0,0};

void dfs(int ny, int nx, int cnt){
    if(result < cnt){
        result = cnt;
    }
    for(int i=0; i<4; i++){
        int py = ny + y[i];
        int px = nx + x[i];
        if(0<= py & py < r & 0<= px & px < c & alphabet[graph[py][px]-65] == 0){
            alphabet[graph[py][px]-65] = 1;
            dfs(py, px, cnt+1);
            alphabet[graph[py][px]-65] = 0;
        }
    }
}

int main(){
    cin >> r >> c;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> graph[i][j];
        }
    }
    alphabet[graph[0][0]-65] = 1;
    dfs(0,0,1);
    cout << result;
}