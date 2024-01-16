#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>
#include<cmath>
using namespace std;

string Calculate(string s1, string s2)
{
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    int len1 = s1.length();
    int len2 = s2.length();
    int check = max(len1, len2); 

    int carry = 0; 
    string result = "";

    for (int i = 0; i < check || carry; ++i)
    {
        int v1 = (i < len1) ? (s1[i] - '0') : 0;
        int v2 = (i < len2) ? (s2[i] - '0') : 0;

        int sum = v1 + v2 + carry;
        result += (sum % 2) + '0';

        carry = sum / 2;
    }
    if (result == "0") 
        return "0";
    reverse(result.begin(), result.end());
    return result.erase(0, min(result.find_first_not_of('0'), result.size() - 1));
}





int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	std::cout.tie(NULL);
	
	string s1, s2;
	cin >> s1 >> s2;
    cout << Calculate(s1, s2);



    return 0;
}