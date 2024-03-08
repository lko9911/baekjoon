#include<iostream>

using namespace std;

int main() {
	int T,n;
	cin >> T;
	int result = 0;
	for (int i = 0; i < T; i++) {
		int cnt = 0;
		cin >> n;
		for (int j = 1; j <= n; j++)
			if (n % j == 0)
				cnt++;
		
		if (cnt == 2)
			result++;
	}
	cout << result;
}