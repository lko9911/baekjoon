#include <iostream>
#include <deque>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    deque<int> dq;
    for (int i = 1; i <= N; i++) {
        dq.push_back(i);
    }

    int answer = 0;

    while (M--) {
        int target;
        cin >> target;

        // target 위치 찾기
        int idx = 0;
        for (int i = 0; i < dq.size(); i++) {
            if (dq[i] == target) {
                idx = i;
                break;
            }
        }

        // 왼쪽 vs 오른쪽 회전 중 최소
        if (idx <= dq.size() / 2) {
            // 왼쪽 회전
            while (idx--) {
                dq.push_back(dq.front());
                dq.pop_front();
                answer++;
            }
        } else {
            // 오른쪽 회전
            int move = dq.size() - idx;
            while (move--) {
                dq.push_front(dq.back());
                dq.pop_back();
                answer++;
            }
        }

        // 맨 앞 원소 제거 (1번 연산)
        dq.pop_front();
    }

    cout << answer << endl;
    return 0;
}
