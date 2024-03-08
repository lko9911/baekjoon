#include<iostream>
#include<cstring>

using namespace std;

int main() {
	string s;
	char index[26];
	int n[26];

	cin >> s;

	int a = 65;
	for (int i = 0; i < 26; i++){
		index[i] = a;
		n[i] = 0;
		a++;
	}

	for (int i = 0; i < s.length(); i++)
		if (s[i] >= 97)
			s[i] = s[i] - 32;

	for (int j = 0; j < 26; j++) {
		int cnt = 0;
		for (int i = 0; i < s.length(); i++)
			if (s[i] == index[j])
				cnt++;
		n[j] = cnt;
	}
	
	int check = 0;

	int M = 0;

	for (int i = 0; i < 26; i++)
		if (M < n[i])
			M = n[i];

	for (int i = 0; i < 26; i++)
		if (n[i] >= M)
			check++;

	if (check >= 2) {
		cout << '?';
		return 0;
	}
	

	int max = 0;
	int k = -1;
	for (int i = 0; i < 26; i++)
		if (max < n[i]) {
			max = n[i];
			k = i;
		}

	if (k == -1)
		cout << '?';
	else
	cout << index[k];
}