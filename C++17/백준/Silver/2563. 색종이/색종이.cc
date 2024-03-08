#include<iostream>

using namespace std;

int main() {
	int T;
	int x, y;

	cin >> T;
	int area[100][100] = { 0 };

	int cnt = 0;
	while (T--) {
		cin >> x >> y;

		for(int i=x;i<x+10;i++)
			for (int j = y; j < y + 10; j++)
				if (!area[i][j]) {
					cnt++;
					area[i][j] = 1;
				}
	}

	cout << cnt;
}