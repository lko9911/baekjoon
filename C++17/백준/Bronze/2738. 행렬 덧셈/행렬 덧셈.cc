#include<iostream>

using namespace std;

int main() {
	int q[101][101];
	int w[101][101];
	int sum[101][101];

	for (int i = 0; i < 101; i++)
		for (int j = 0; j < 101; j++) {
			q[i][j] = 0;
			w[i][j] = 0;
			sum[i][j] = 0;
		}

	int a, b;
	cin >> a >> b;

	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			cin >> q[i][j];
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			cin >> w[i][j];

	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			sum[i][j] = q[i][j] + w[i][j];

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++)
			cout << sum[i][j] << " ";
			cout << endl;
	}
}