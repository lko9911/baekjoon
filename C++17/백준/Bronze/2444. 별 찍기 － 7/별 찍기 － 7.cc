#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int j = 1; j < n; j++) {
		for (int i = j; i <= (2 * n - 1) / 2; i++)
			cout << " ";

		for (int i = 1; i < 2 * j; i++)
			cout << "*";
		cout << endl;
	}

	for (int j = n; j > 0; j--) {
		for (int i = j; i <= (2 * n - 1) / 2; i++)
			cout << " ";

		for (int i = 1; i < 2 * j; i++)
			cout << "*";
		cout << endl;
	}
}