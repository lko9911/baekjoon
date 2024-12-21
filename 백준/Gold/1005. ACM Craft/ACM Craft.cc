#include <iostream>
#include <vector>
#include <queue>
#include <algorithm> // max 함수 사용

using namespace std;

int t, n, line, w;

vector<int> build;
vector<vector<int>> v;
vector<int> dp;
vector<int> indegree;

void BFS() {
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0) {
            q.push(i);
            dp[i] = build[i];
        }
    }
    
    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        for (int next : v[curr]) {
            dp[next] = max(dp[next], dp[curr] + build[next]);
            if (--indegree[next] == 0) {
                q.push(next);
            }
        }
    }
}

int main() {
    cin >> t;
    while (t--) {
        cin >> n >> line; // 건물 개수, 연결점의 수
        
        build.assign(n + 1, 0);
        dp.assign(n + 1, 0);
        indegree.assign(n + 1, 0);
        v.assign(n + 1, vector<int>());

        for (int i = 1; i <= n; i++) {
            cin >> build[i]; // 건설 시간
        }
        
        for (int i = 0; i < line; i++) {
            int x, y;
            cin >> x >> y;
            v[x].push_back(y); // 단방향 연결
            indegree[y]++;
        }
        
        cin >> w; // 목표 건물
        
        BFS();
        cout << dp[w] << "\n"; // 최소 시간 출력
    }

    return 0;
}