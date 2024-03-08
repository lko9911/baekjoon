#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char s[101];
	char a[101], b[101];

	for (int i = 0; i < 101; i++) {
		a[i] = '\0';
		b[i] = '\0';
		s[i] = '\0';
	}
	cin >> s;

	if (strlen(s) == 1) {
		cout << 1;
		return 0;
	}

	for (int i = 0; i < strlen(s) / 2; i++)
		a[i] = s[i];

	int j = 0;
	for (int i = strlen(s) - 1; i >= strlen(s) / 2; i--) {
		b[j] = s[i];
		j++;
	}
	int check = 1;
	for (int i = 0; i < strlen(s) / 2; i++)
		if (a[i] != b[i]) {
			check = 0;
		}
	cout << check;
}