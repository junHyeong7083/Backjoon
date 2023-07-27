#include<iostream>
#include<vector>
#include<algorithm>
using	namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector <int> arr(n);
	int check[3] = { 0 ,1,2 };
	int index = 0, cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		if (arr[i] == check[index])
		{
			cnt++;
			index++;
			if (index > 2)
				index = 0;
		}
	}

	cout << cnt << endl;
	return 0;
}