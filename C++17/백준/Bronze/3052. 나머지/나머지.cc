#include<iostream>

using namespace std;

int main() {
	int s[10], s_r[10];
	int n = 0;

	for (int i = 0; i < 10; i++) {
		cin >> s[i];
		s_r[i] = s[i] % 42;
	}

	int i,j,check = 0;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < i; j++)
			if (s_r[i] == s_r[j])
				break;
		if (i == j)
			check++;
	}

	cout << check;
}