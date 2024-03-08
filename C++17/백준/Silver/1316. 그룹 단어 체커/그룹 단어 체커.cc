#include<iostream>

using namespace std;

int main() {
	string s;
	int T;

	cin >> T;

	int cnt = 0;
	for (int i = 0; i < T; i++) {
		int check = 0;
		cin >> s;


		for (int j = 0; j < s.length()-1; j++)
			if (s[j] != s[j + 1])
				for (int k = j + 1; k < s.length(); k++)
					if (s[j] == s[k]) 
						check = 1;

		if (!check)
			cnt++;
	}
	cout << cnt;
}