#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	while (n--) {
		for (int i = 0; i < n+1; i++) cout << "*";
		cout << "\n";
	}
}