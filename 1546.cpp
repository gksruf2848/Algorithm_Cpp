#include <iostream>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, score, best=0;
	float sum = 0.0;
	cin >> n;
	
	int arr[1000] = { 0 };

	for (int i = 0; i < n; i++)
	{
		cin >> score;
		arr[i] = score;
		if (score > best) best = score;
	}
	for (int j = 0; j < n; j++)
	{
		sum += (float)((arr[j] / (float)best) * 100);
	}
	cout << sum / n << "\n";
}