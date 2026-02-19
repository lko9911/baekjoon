#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int L;
    cin >> L;

    vector<int> S(L);
    for (int i = 0; i < L; i++) {
        cin >> S[i];
    }

    int n;
    cin >> n;

    sort(S.begin(), S.end());

    // n이 S에 포함되어 있으면 0
    if (find(S.begin(), S.end(), n) != S.end()) {
        cout << 0 << endl;
        return 0;
    }

    int left = 0;   // n보다 작은 값 중 최댓값
    int right = 0;  // n보다 큰 값 중 최솟값

    for (int i = 0; i < L; i++) {
        if (S[i] < n) {
            left = S[i];
        } else if (S[i] > n) {
            right = S[i];
            break;
        }
    }

    int result = (n - left) * (right - n) - 1;
    cout << result << endl;

    return 0;
}
