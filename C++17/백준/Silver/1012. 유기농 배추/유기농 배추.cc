#include <iostream>
#include <cstring>

using namespace std;

int farm[50][50] = { 0 };
// 상하좌우에 위치값
int x_move[4] = {0,0,-1,1};
int y_move[4] = {-1,1,0,0};


// 인접 거리의 수 저장 함수 (DFS 알고리즘 사용)
void DFS(int x, int y,int m,int n) {
	farm[x][y] = 0;
	for (int i = 0; i < 4; i++) {
		int x_pre = x + x_move[i];
		int y_pre = y + y_move[i];
		if (x_pre < 0 || x_pre > m - 1 || y_pre < 0 || y_pre > n - 1) // 예외처리
			continue; 
		if(farm[x_pre][y_pre]==1)
			DFS(x_pre, y_pre,m,n);
	}
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int m,n, x, y,t;
		int result = 0;
		cin >> m >> n >> t;

		while (t--) {
			cin >> x >> y;
			farm[x][y] = 1;
		}
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				if (farm[i][j] == 1) {
					DFS(i, j,m,n);
					result++;
				}
	
		cout << result << endl;
		memset(farm, 0, sizeof(farm));
	}
}
