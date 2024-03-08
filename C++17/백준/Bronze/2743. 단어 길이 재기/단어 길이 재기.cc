#include<iostream>
#include<string.h>

using namespace std;

int main() {
	char s[101];
	memset(s, 0, sizeof(int));

	cin >> s;
	int cnt = 0;

	for (int i = 0; i < 100; i++) {
		if (s[i] == 0)
			break;
		cnt++;
	}

	cout << cnt;
	}