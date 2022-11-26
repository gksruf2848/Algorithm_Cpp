#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int profit = 0;
	int cost = 0;
	if (c <= b)
	{
		cout << "-1";
		return 0;
	}
	cout << a / (c - b) + 1;
	return 0;
}