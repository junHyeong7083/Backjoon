#include<iostream>
#include<vector>
#include<queue>
#include<utility>
#include<functional>
#include<algorithm>
using namespace std;
/*
	0~n의 집합 (n+1개)
    합집합 연산, 두 원소가 같은 집합에 포함되어 있는지 확인하는 연산
    집합을 표현하는 프로그램 작성

    첫줄 n,m
    m은 입력으로 주어지는 연산개수
    합집합은 0 a b 형태 
    -> a포함되있는집합 + b 포함 집합 합침

    두원소가 같은 집합에 포함되있는지 확인은 1 a b
    같은 집합 = YES
    다른 집합 = NO
*/
int n, m;
vector<int> parent;

void bootstrap()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init()
{
    cin >> n >> m;

    parent.resize(n + 1); // parent 사이즈 설정

    for (int i = 0; i <= n; ++i)
    {
        parent[i] = i; // 초창기 각 원소의 대표는 자기자신
    }
}

int FindParent(int x)
{
    if (parent[x] == x) // 만약 같으면 리턴
        return x;

    return parent[x] = FindParent(parent[x]); // 다르면 계속 타고 나가기
}

void Union(int a, int b)
{
    int pa = FindParent(a);
    int pb = FindParent(b);

    if (pa != pb)
    {
        parent[pb] = pa; // 집합합치기
    }
}
void solved()
{
    int a, b, c;
    while (m--)
    {
        cin >> a >> b >> c;
        if (!a) // 0
        {
            Union(b, c);
        }
        else // 1 
        {
            int fb = FindParent(b);
            int fc = FindParent(c);

            if (fb != fc)
                cout << "NO" << "\n";
            else
                cout << "YES" << "\n";
        }
    }
}



int main()
{
    bootstrap();
    init();
    solved();
    
    
    return 0;
}