#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n, ans; // n : 자연수 n
vector <bool> isPrime;
vector <int> prime;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//input
	cin >> n;
	isPrime.resize(n + 1, true);

	//solve

	for (int i = 2; i * i <= n; i++) //소수 구하기 - 에라토스테네스의 체
	{
		for (int j = i * 2; j <= n; j += i)
			isPrime[j] = false;
	}

	for (int i = 2; i <= n; i++) // 소수들을 벡터에 담음 -> 계산 편리
	{
		if (isPrime[i])prime.push_back(i);
	}

	//start와 end 사이의 구간합 구하기
	//1 .구간 합이 n보다 크면 현재 start위치에 있는 수를 뺀다.
	//2 .구간 합이 n보다 작으면 현재 end위치에 있는 수를 더한다.
	//3 .구간 합이 n과 같으면 and 1 증가

	int start = 0, end = 0, sum = 0;
	while (1)
	{
		if (sum > n) sum -= prime[start++]; //1번
		else if (end == prime.size()) break; //기저사례 : 현재 가르키는 end가 범위 내의 마지막 소수라면
		else sum += prime[end++]; //2번

		if (sum == n) ans++; //3번
	}

	//output
	cout << ans;
	return 0;
}