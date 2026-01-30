#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<string> F(N);
    for (int i = 0; i < N; i++) {
        cin >> F[i];
    }

    int answer = 0;

    for (int i = 0; i < N; i++) {
        vector<bool> isFriend(N, false);

        for (int j = 0; j < N; j++) {
            if (i == j) continue;

            // 직접 친구
            if (F[i][j] == 'Y') {
                isFriend[j] = true;
            } else {
                // 친구의 친구
                for (int k = 0; k < N; k++) {
                    if (F[i][k] == 'Y' && F[k][j] == 'Y') {
                        isFriend[j] = true;
                        break;
                    }
                }
            }
        }

        int cnt = 0;
        for (bool v : isFriend) if (v) cnt++;
        answer = max(answer, cnt);
    }

    cout << answer << '\n';
    return 0;
}
