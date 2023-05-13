#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	int cnt = 0;		//5로 나누는 경우
	
	for (int i = 2; i <= n; i++)
	{
		int temp = i;		//i의 값 임시 저장
		while (temp % 5 == 0)	//5로 나눌 수 없을 때까지 반복
		{
			temp /= 5;
			cnt++;
		}
	}
	cout << cnt;
}