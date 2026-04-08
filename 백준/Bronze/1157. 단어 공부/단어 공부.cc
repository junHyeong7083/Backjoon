#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)

char Input[1000000];
int Number[26];
int main()
{
	char a;
	scanf("%s", Input); // 문자열 입력받음

	// 배열값을 저장하고
	// if문으로 비교후 한 값이 'a'이상이일경우 -32를 하면 소문자가 대문자로 출력
	// 젤많이 나온 배열값에 아스키 코드값을출력하면 정답.
	int len = strlen(Input); 
	for (int i = 0; i < len; ++i) 
	{
		if (Input[i] >= 'a')  { Input[i] = Input[i] - 32; } 
		Number[Input[i] -'A']++;
	} 
	int check = 0,max = 0;
	for (int k = 0; k < 26; ++k)
	{
		if (Number[k] > max)
		{
			max = Number[k];
			a = k;
		}
		else if (Number[k] == max)
			a = '?';
	}
	if (a != '?')
		printf("%c", a+'A');
	else if(a == '?')
		printf("%c",a);

	return 0;
}