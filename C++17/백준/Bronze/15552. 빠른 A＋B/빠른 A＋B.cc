#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	while (T--) {
		int a, b;
		cin >> a >> b;
		cout << a + b << '\n';
	}
}