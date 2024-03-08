#include<iostream>
#include<cstring>

using namespace std;

int main() {
	string s;
	cin >> s;

	int count = 0;
	int c = s.length();

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'c')
			if (s[i + 1] == '=' || s[i + 1] == '-') {
				count++;
				c =c- 2;
			}
		if (s[i] == 'd')
			if (s[i + 1] == '-') {
				count++;
				c =c- 2;
			}
			else if (s[i + 1] == 'z' && s[i + 2] == '=') {
				count++;
				c =c- 3;
				i+=2;
			}

		if (s[i] == 'l' && s[i + 1] == 'j') {
			count++;
			c = c- 2;
		}
		if (s[i] == 'n' && s[i + 1] == 'j') {
			count++;
			c = c - 2;
		}
		if (s[i] == 's' && s[i + 1] == '=') {
			count++;
			c = c- 2;
		}
		if (s[i] == 'z' && s[i + 1] == '=') {
			count++;
			c = c- 2;
		}
	}
		
	cout << count +c;
}