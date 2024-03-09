#include<iostream>
using namespace std;

int main() {
	char chess[8][8];

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
		cin >> chess[i][j];

	int cnt = 0;
	for (int i = 0; i < 8; i += 2)
		for (int j = 0; j < 8; j += 2)
			if (chess[i][j] == 'F')
				cnt++;

	for (int i = 1; i < 8; i += 2)
		for (int j = 1; j < 8; j += 2)
			if (chess[i][j] == 'F')
				cnt++;

	cout << cnt;
}