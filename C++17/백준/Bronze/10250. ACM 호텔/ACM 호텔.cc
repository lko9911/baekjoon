#include<iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int h, w, n;
		cin >> h >> w >> n;
		int a = n % h;
		int b = n / h + 1;
		if (a == 0) {
			a = h;
			b = n/h;
		}
			if (b < 10)
				cout << a << '0' << b << endl;
			else
				cout << a << b << endl;
	}
}