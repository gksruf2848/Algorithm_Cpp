#include <iostream>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, a, b, i=0;
	cin >> n;
	m = n;
	do
	{
		a = m / 10;
		b = m % 10;
		m = 10 * b + ((a + b) % 10);
		i++;
	} while (m != n);
	cout << i << "\n";
}