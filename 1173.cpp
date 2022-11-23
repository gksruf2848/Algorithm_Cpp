#include <iostream>
using namespace std;

int main() {
    int N, m, M, T, R;
    cin >> N >> m >> M >> T >> R;
    int time = 0, X = m;

    if (M - m < T || R == 0) {
        time = -1;
        N = 0;
    }

    while (N) { //운동할라는 시간이 되면 멈춤
        if (X + T <= M) {
            X += T;
            N--;
        }
        else if (X - R < m)
            X = m;
        else
            X -= R;
        time++;
    }
    cout << time << "\n";
}