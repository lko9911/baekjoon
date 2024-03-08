#include<iostream>

using namespace std;

int main() {
	int q[9][9];

	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++) 
			q[i][j] = 0;

	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			cin >> q[i][j];

	int max = q[0][0];
	int a = 0, b = 0;

	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			if (max < q[i][j]) {
				max = q[i][j];
				a = i;
				b = j;
			}

	cout << max << endl << a+1 << " " << b+1;

}