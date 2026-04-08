#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)

char Input[101];
int Pos[26];
int main()
{
	scanf("%s", Input);
	// a~ z 26개
	for (int i = 0; i < 26; ++i) 
	{
		Pos[i] = 100;
	}

	int len = strlen(Input);
	for (int k = 0; k < len; ++k)
	{
		int check = Input[k] - 'a';
		if (Pos[check] > k)
			Pos[check] = k;

	}
	for (int j = 0; j < 26; ++j)
	{	
		if (Pos[j] == 100) printf("-1 ");
		else if(Pos[j] != 100) printf("%d ", Pos[j]);
	}

	return 0;
}