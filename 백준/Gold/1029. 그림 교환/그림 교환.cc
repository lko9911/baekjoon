#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<vector<int>> price(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < N; j++) {
            price[i][j] = s[j] - '0';
        }
    }

    const int INF = 10;
    int MAX_MASK = 1 << N;

    vector<vector<int>> dp(MAX_MASK, vector<int>(N, INF));

    // 시작 상태: 1번 아티스트(0번 인덱스), 가격 0
    dp[1][0] = 0;

    for (int mask = 0; mask < MAX_MASK; mask++) {
        for (int last = 0; last < N; last++) {
            if (dp[mask][last] == INF) continue;

            int curPrice = dp[mask][last];

            for (int nxt = 0; nxt < N; nxt++) {
                if (mask & (1 << nxt)) continue;

                if (price[last][nxt] >= curPrice) {
                    int newMask = mask | (1 << nxt);
                    dp[newMask][nxt] = min(dp[newMask][nxt],
                                            price[last][nxt]);
                }
            }
        }
    }

    int ans = 0;
    for (int mask = 0; mask < MAX_MASK; mask++) {
        for (int last = 0; last < N; last++) {
            if (dp[mask][last] != INF) {
                ans = max(ans, __builtin_popcount(mask));
            }
        }
    }

    cout << ans << "\n";
    return 0;
}
