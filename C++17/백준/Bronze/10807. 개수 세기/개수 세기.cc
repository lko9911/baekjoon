#include<iostream>

using namespace std;

int main() {
	int T,N,s[100];
	cin >> T;

	for (int i = 0; i < T; i++) 
		cin >> s[i];
	cin >> N;

	int check = 0;

	for (int i = 0; i < T; i++)
		if (s[i] == N)
			check++;

	cout << check;
}