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
		int x1, y1, x2, y2;

		cin >> x1 >> y1 >> x2 >> y2;

		int n;
		cin >> n;


		int enter = 0;
		int departure = 0;
		while (n--)
		{
			int x, y, r;
			cin >> x >> y >> r;

			if ((x - x1) * (x - x1) + (y - y1) * (y - y1) < r * r)
				if ((x - x2) * (x - x2) + (y - y2) * (y - y2) > r * r)
					departure++;

			if ((x - x1) * (x - x1) + (y - y1) * (y - y1) > r * r)
				if ((x - x2) * (x - x2) + (y - y2) * (y - y2) < r * r)
					enter++;
		}

		cout << enter + departure << '\n';
	}
    

    return 0;
}