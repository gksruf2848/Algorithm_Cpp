#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	for (int j = n; j >= 1; j--) {
		for (int i = 0; i < n-j; i++) cout << " ";
		for (int i = 0; i < 2 * j - 1; i++) cout << "*";
		cout << "\n";
	}
}