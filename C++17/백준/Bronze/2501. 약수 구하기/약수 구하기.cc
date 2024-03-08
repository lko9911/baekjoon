#include<iostream>

using namespace std;

int main() {
	int x, y;
	int result[10001] = { 0 };
	cin >> x >> y;

	int cnt = 0,a=0;
	
	for (int i = 1; i <= x; i++) {
		if (x % i == 0) {
			result[a] = i;
			cnt++;
			a++;
		}
	}

	cout << result[y-1];
}