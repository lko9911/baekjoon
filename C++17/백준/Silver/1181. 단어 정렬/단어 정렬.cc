#include<iostream>
#include<algorithm>
using namespace std;

string s[20000];

int cmp(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}

int main() {
	int T;
	cin >> T;
	
	for (int i = 0; i < T; i++)
		cin >> s[i];

	sort(s, s + T, cmp);

	for (int i = 0; i < T; i++){
		if (s[i] == s[i - 1]) {
			continue;
		}
			cout << s[i] << '\n';
		}
}