#include<iostream>
#include<map>
#include<string>
#include<stack>
#include<vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
	while (t--)
	{
        int n;
        cin >> n;
        int checkN = n+1;
        int check = n % 100;

        if (checkN % check == 0  )
            cout << "Good" << endl;
        else
            cout << "Bye" << endl;

	}
    

    return 0;
}