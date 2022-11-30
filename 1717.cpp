#include <iostream>
using namespace std;

void _union(int, int);
int find(int);
int parent[1000000];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	int check, first, second;

	for (int i = 1; i <= n; i++)
	{
		parent[i] = i;
	}
	
	while (m--)
	{
		cin >> check >> first >> second;
		if (!check) _union(first, second);
		else {
			if (find(first) == find(second)) printf("YES\n");
			else printf("NO\n");
		}
	}
}

void _union(int f, int s)
{
	int firstParent = find(f);
	int secondParent = find(s);
	if (firstParent != secondParent)
	{
		parent[firstParent] = secondParent;
	}
}
int find(int i)
{
	if (parent[i] == i) return i;
	else return parent[i] = find(parent[i]);
}