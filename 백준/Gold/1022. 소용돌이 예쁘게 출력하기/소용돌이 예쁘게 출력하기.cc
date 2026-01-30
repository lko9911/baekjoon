#include <bits/stdc++.h>
using namespace std;

long long value(int r, int c) {
    int k = max(abs(r), abs(c));
    long long base = (long long)(2 * k + 1) * (2 * k + 1);

    if (r == k) return base - (k - c);                  // bottom
    if (c == -k) return base - 2 * k - (k - r);         // left
    if (r == -k) return base - 4 * k - (c + k);         // top
    return base - 6 * k - (r + k);                      // right
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    vector<vector<long long>> board;
    int width = 0;

    for (int i = r1; i <= r2; i++) {
        vector<long long> row;
        for (int j = c1; j <= c2; j++) {
            long long v = value(i, j);
            row.push_back(v);
            width = max(width, (int)to_string(v).length());
        }
        board.push_back(row);
    }

    for (auto &row : board) {
        for (auto &v : row) {
            cout << setw(width) << v << " ";
        }
        cout << '\n';
    }
}
