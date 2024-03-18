#include<iostream>

using namespace std;

int a(int x, int y) {
	if (x % y == 0)
		return y;
	else
		return a(y, x % y);
}


int main() {
	int T;
	int x, y;
	cin >> T;
	while (T--) {
		cin >> x >> y;
		if (x >= y) {
			cout << x * y / a(x, y) << '\n';
		}
		else
			cout << x * y / a(y, x) << '\n';
	}
	
}