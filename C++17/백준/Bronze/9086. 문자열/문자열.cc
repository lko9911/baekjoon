#include<iostream>
#include<string.h>

using namespace std;

int main() {
	char s[1001];
	int n;
	memset(s, 0, sizeof(int));
	cin >> n;

	while (n--) {
		cin >> s;
		int cnt = 0;
		for (int i = 0; i < 1000; i++) {
			if (s[i] == 0)
				break;
			cnt++;
		}
		cout << s[0] << s[cnt - 1] << endl;
	}

	}