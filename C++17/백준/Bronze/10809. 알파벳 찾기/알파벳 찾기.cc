#include<iostream>
#include<string.h>

using namespace std;

int main() {
	char s[101];
	char index[26];
	int check[26];

	cin >> s;

	for (int i = 0; i < 26; i++) 
		check[i] = -1;

	int k = 97;

	for (int i = 0; i < 26; i++) {
		index[i] = k;
		k++;
	}

	for (int j = 0; j < 26; j++) 
		for (int i = 0; i < 101; i++) {
			if (s[i] == index[j]) {
				check[j] = i;
				break;
			}
			if (s[i] == '\0')
				break;
		}
	for (int j = 0; j < 26; j++)
		cout << check[j] << " ";
}