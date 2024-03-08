#include<iostream>

using namespace std;

int main() {
	int s[9];
	int n = 0;

	for (int i = 0; i < 9; i++)
		cin >> s[i];

	int max = s[0];

	for (int i = 0; i < 9; i++) {
		if (max < s[i]) {
			max = s[i];
			n = i;
		}
	}
	cout << max << '\n' << n+1;
}