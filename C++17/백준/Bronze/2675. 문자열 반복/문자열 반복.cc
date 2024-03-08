#include<iostream>

using namespace std;

int main() {
	char s[101];
	int n,T;

	cin >> T;

	while (T--) {
		cin >> n >> s;
		for (int i = 0; i<101; i++) {
			if (s[i] == '\0')
				break;
			for (int j = 0; j < n; j++)
				cout << s[i];
		}
		cout << endl;
	}
}