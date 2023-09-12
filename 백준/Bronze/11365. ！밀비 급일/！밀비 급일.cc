#include<iostream>
#include<string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

    while (true)
    {

        string input;

        getline(cin, input);
        if (input == "END")

            break;



        for (int e = input.length() - 1; e >= 0; e--)
            cout << input[e];

        cout << endl;

    }

    return 0;
}