#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<pair<int, int>> p(N);
        for (int i = 0; i < N; i++) {
            cin >> p[i].first >> p[i].second;
        }

        long long totalX = 0, totalY = 0;
        for (auto &pt : p) {
            totalX += pt.first;
            totalY += pt.second;
        }

        vector<int> sel(N, 0);
        for (int i = 0; i < N / 2; i++) sel[i] = 1;

        double ans = 1e18;

        do {
            long long sx = 0, sy = 0;
            for (int i = 0; i < N; i++) {
                if (sel[i]) {
                    sx += p[i].first;
                    sy += p[i].second;
                }
            }

            long long vx = 2 * sx - totalX;
            long long vy = 2 * sy - totalY;

            double len = sqrt((double)vx * vx + (double)vy * vy);
            ans = min(ans, len);

        } while (prev_permutation(sel.begin(), sel.end()));

        cout << fixed << setprecision(12) << ans << "\n";
    }

    return 0;
}
