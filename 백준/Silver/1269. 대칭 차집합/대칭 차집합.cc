#include <iostream>
#include <vector>
#include<map>
#include<set>
using namespace std;

int main()
{
	int na, nb;
	cin >> na >> nb;
	set<int> s1;
	for (int e = 0; e < na; ++e)
	{
		int n;
		cin >> n;
		s1.insert(n);
	}
	for (int e = 0; e < nb; ++e)
	{
		int n;
		cin >> n;
		if (s1.find(n) == s1.end())
			s1.insert(n);
		else
			s1.erase(n);
	}
	cout << s1.size();


	return 0;
}