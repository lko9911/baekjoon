#include<iostream>
using namespace std;

bool check(long long n) { //소수찾기 알고리즘
	if (n <= 1)
		return 1;
	else if (n == 2 || n == 3)
		return 0;
	else if (n % 2 == 0 || n % 3 == 0)
		return 1;
	for (long long i = 5; i * i <= n; i++) {
		if (n % i == 0 || n % (i + 2) == 0)
			return 1;
	}
	return 0;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		long long n;
		cin >> n;
		while (check(n))
			n++;
		cout << n << endl;
	}
}