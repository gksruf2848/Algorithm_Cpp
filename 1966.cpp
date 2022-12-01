#include <iostream>
#include <queue>
#include <string>
using namespace std;

int max(queue<int> que) {
	int max = 0, size = que.size();
	for (int i = 0; i < size; i++) {
		if (max < que.front()) {
			max = que.front();
			que.pop();
		}
		else que.pop();
	}
	return max;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	while (t--) {
		queue<int> q;
		int n, m, x, num = 0; //몇 번째로 인쇄되는지
		cin >> n >> m;

		while (n--) {
			cin >> x;
			q.push(x);
		}
		while (1) {
			if (q.front() == max(q)) { //중요도가 가장 높다면 인쇄
				if (m == 0) { //그게 내가 원하던 숫자라면 출력하고 끝
					cout << ++num << "\n";
					break;
				}
				else { //아니라면 인쇄하고 num 증가
					q.pop();
					num++;
					m--;
				}
			}
			else { //인쇄 안 하고 뒤로 넘김
				q.push(q.front());
				q.pop();
				if (m == 0) m = q.size() - 1;
				else m--;
			}
		}
	}

}