#include<iostream>

using namespace std;

int dx[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
int dy[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };

int n, m;
int board[102][72];
int vis[102][72];
int ans;
bool isPeak;

void BFS(int i, int j) {
    int queue[2][10000]; // 큐 구현을 위한 배열
    int front = 0, rear = 0;
    queue[0][rear] = i;
    queue[1][rear] = j;
    rear++;

    vis[i][j] = 1;

    while (front != rear) {
        int currentX = queue[0][front];
        int currentY = queue[1][front];
        front++;

        for (int dir = 0; dir < 8; dir++) {
            int nx = currentX + dx[dir];
            int ny = currentY + dy[dir];

            if (nx < 0 || ny < 0 || nx >= n || ny >= m)
                continue;

            if (board[i][j] < board[nx][ny])
                isPeak = false;

            if (vis[nx][ny] || board[i][j] != board[nx][ny])
                continue;

            queue[0][rear] = nx;
            queue[1][rear] = ny;
            rear++;
            vis[nx][ny] = 1;
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j]) {
                isPeak = true;
                BFS(i, j);
                if (isPeak)
                    ans++;
            }
        }
    }

    cout << ans;

    return 0;
}

// 제출용 코드(bfs 알고리즘)_수정 예정
