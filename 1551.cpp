#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {


	int n, k;
	vector<int> A;
	cin >> n >> k;

	int a;
	for(int i=0; i<n;i++) {
		scanf("%d,", &a);
		A.push_back(a);
	}

	while (k--) {
		for (int i = 0; i < n-1; i++) {
			A[i]=A[i + 1] - A[i];
		}
		n--;
	}

	for (int i = 0; i < n; i++) {
		if(i==(n-1)) printf("%d\n",A[i]);
		else printf("%d,",A[i]);
	}

}