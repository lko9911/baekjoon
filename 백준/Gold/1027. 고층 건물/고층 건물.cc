#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 기울기를 계산하는 함수
double slope(int x1, int y1, int x2, int y2) {
    return static_cast<double>(y2 - y1) / (x2 - x1);
}

int main() {
    int N;
    cin >> N;

    vector<int> buildings(N);
    for (int i = 0; i < N; i++) {
        cin >> buildings[i];
    }

    int result = 0;

    for (int i1 = 0; i1 < N; i1++) {
        int x1 = i1 + 1;
        int y1 = buildings[i1];

        // 오른쪽 볼 수 있는 빌딩 수
        double cur_slope_right = -1e9;
        int visible_right = 0;
        for (int i2 = i1 + 1; i2 < N; i2++) {
            int x2 = i2 + 1;
            int y2 = buildings[i2];
            double slope_right = slope(x1, y1, x2, y2);
            if (slope_right > cur_slope_right) {
                cur_slope_right = slope_right;
                visible_right++;
            }
        }

        // 왼쪽 볼 수 있는 빌딩 수
        double cur_slope_left = 1e9;
        int visible_left = 0;
        for (int i3 = i1 - 1; i3 >= 0; i3--) {
            int x2 = i3 + 1;
            int y2 = buildings[i3];
            double slope_left = slope(x1, y1, x2, y2);
            if (slope_left < cur_slope_left) {
                cur_slope_left = slope_left;
                visible_left++;
            }
        }

        // 결과 갱신
        result = max(result, visible_left + visible_right);
    }

    cout << result << endl;
    return 0;
}
