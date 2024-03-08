#include<iostream>

using namespace std;

int main() {
	int T,N;
	cin >> T;

	while (T--) {
		int result[4] = {0};
		cin >> N;
		result[0] = N / 25;
		result[1] = (N % 25) / 10;
		result[2] = ((N % 25) % 10) / 5;
		result[3] = (((N % 25) % 10) % 5) / 1;
	
		for (int i = 0; i < 4; i++)
			cout << result[i] << " ";
		cout << endl;
	}
}