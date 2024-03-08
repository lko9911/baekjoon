#include <iostream>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

string chess_1[8] = { "WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW" };

	string chess_2[8] = {
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB"
};
	string chess[50];
	int cnt_chess_1(int x, int y) {
		int cnt = 0;

		for (int i = 0; i < 8; i++)
			for (int j = 0; j < 8; j++)
				if (chess_1[i][j] != chess[x+i][y+j])
					cnt++;

		return cnt;
	}

	int cnt_chess_2(int x, int y) {
		int cnt = 0;

		for (int i = 0; i < 8; i++)
			for (int j = 0; j < 8; j++)
				if (chess_2[i][j] != chess[x + i][y + j])
					cnt++;

		return cnt;
	}
int main() {
	pair<int, int>p;

	cin >> p.first >> p.second;

	int cnt_1=0,cnt_2=0;
	
	for (int i = 0; i < p.first; i++)
		cin >> chess[i];

	int min_value = 99999;
	for (int i = 0; i+8 <= p.first; i++)
		for (int j = 0; j + 8 <= p.second; j++) {
			int temp = min(cnt_chess_1(i,j), cnt_chess_2(i, j));
			if (temp < min_value)
				min_value=temp;
		}

	cout << min_value;
	
}