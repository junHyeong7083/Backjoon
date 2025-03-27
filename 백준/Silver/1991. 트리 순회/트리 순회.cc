#include<iostream>
#include<unordered_map>
using namespace std;
 
struct Node
{
	char left, right;
};
unordered_map<char, Node> tree;

void preorder(char node)
{
	if (node == '.') return;
	cout << node;
	preorder(tree[node].left);
	preorder(tree[node].right);
}

void inorder(char node)
{
	if (node == '.') return;
	inorder(tree[node].left);
	cout << node;;
	inorder(tree[node].right);
}

void postorder(char node)
{
	if (node == '.') return;
	postorder(tree[node].left);
	postorder(tree[node].right);
	cout << node;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int e = 0; e < n; ++e)
	{
		char parent, left, right;
		cin >> parent >> left >> right;

		tree[parent] = { left, right };
	}
	
	preorder('A');
	cout << "\n";

	inorder('A');
	cout << "\n";

	postorder('A');
	cout << "\n";


	return 0;
}