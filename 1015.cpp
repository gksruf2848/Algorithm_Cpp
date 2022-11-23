#include <iostream>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int A[50] = { 0 };

	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	
	int P[50] = { 0 };
	int num = 0;

	for (int j = 0; j < n; j++)
	{
		int min = 1001;
		for (int k = 0; k < n; k++)
		{
			if (A[k] < min)
			{
				min = A[k];
				num = k;
			}
		}
		P[num] = j;
		A[num] = 1001;
	}

	for (int l = 0; l < n; l++)
	{
		cout << P[l] << " ";
	}
	
	return 0;
}