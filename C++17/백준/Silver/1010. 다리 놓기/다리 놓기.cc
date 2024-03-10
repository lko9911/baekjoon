#include<iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, m, t=1;
		long long result = 1;
		cin >> n >> m;

		for (int i = m; i > m - n; i--) {
			result *= i;
			result /= t;
			t++;
		}
		cout << result << endl;
	}
}