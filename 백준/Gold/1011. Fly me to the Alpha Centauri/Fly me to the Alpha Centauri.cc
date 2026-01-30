#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long x, y;
        cin >> x >> y;

        long long d = y - x;
        long long n = sqrt(d);

        if (n * n == d) {
            cout << 2 * n - 1 << '\n';
        } else if (d <= n * (n + 1)) {
            cout << 2 * n << '\n';
        } else {
            cout << 2 * n + 1 << '\n';
        }
    }
    return 0;
}
