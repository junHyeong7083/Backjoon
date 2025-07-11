#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

int main() 
{
	vector<pair<int, int>> v1(2);
	vector<pair<int, int>> v2(2);

	
	cin >> v1.front().first >> v1.front().second >> v1.back().first >> v1.back().second;
	cin >> v2.front().first >> v2.front().second >> v2.back().first >> v2.back().second;

    int left = max(v1.front().first, v2.front().first);
    int right = min(v1.back().first, v2.back().first);
    int bottom = max(v1.front().second, v2.front().second);
    int top = min(v1.back().second, v2.back().second);

    int width = right - left;
    int height = top - bottom;

    if (width > 0 && height > 0)
        cout << "FACE";
    else if (width == 0 && height == 0)
        cout << "POINT";
    else if ((width == 0 && height > 0) || (width > 0 && height == 0))
        cout << "LINE";
    else
        cout << "NULL";

}
