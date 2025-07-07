#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int w, h;
	cin >> w >> h;

	int n;
	cin >> n;

	vector<int> width;
	vector<int> height;
	width.push_back(0);
	width.push_back(w);

	height.push_back(0);
	height.push_back(h);

	for (int e = 0; e < n;++e)
	{
		int check, point;
		cin >> check >> point;

		if (check == 0)
			height.push_back(point);
		else
			width.push_back(point);

	}

	if (!w || !h)
	{
		cout << 0;
		return 0;
	}

	// 0 3 5 6 10
	// 0 5 7 10
	sort(height.begin(), height.end());
	sort(width.begin(), width.end());


	vector<int> calHeight;
	vector<int> calWidth;

	// height, width의 시작값은 0으로 정렬됨
	for (int e = 1; e < height.size(); ++e)
		calHeight.push_back(height[e] - height[e - 1]);
	// 3 2 1 4
	for (int w = 1; w < width.size(); ++w)
		calWidth.push_back(width[w] - width[w - 1]);
	// 5 2 3
	



	// 1 2 3 4
	// 2 3  5
	sort(calHeight.begin(), calHeight.end());
	sort(calWidth.begin(), calWidth.end());

	
	int res = calWidth.back() * calHeight.back();

	cout << res;


	

	return 0;
}