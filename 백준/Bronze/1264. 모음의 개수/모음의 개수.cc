#include<bits/stdc++.h>
using namespace std;

int main()
{
	char input[256];
	while (true)
	{
		cin.getline(input, 256);
		int check = 0;
        if (input[0] == '#')
		    break;
        
		for (int i = 0; i < strlen(input) ; ++i)
		{
			if (input[i] == 'a' || input[i] == 'A')	 check++;
			if (input[i] == 'e' || input[i] == 'E')	 check++;
			if (input[i] == 'o' || input[i] == 'O') check++;
			if (input[i] == 'i'  || input[i] == 'I')	 check++;
			if (input[i] == 'u' || input[i] == 'U') check++;
		}
		cout << check << endl;
	}

	
	return 0;
}