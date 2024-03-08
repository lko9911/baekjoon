#include<iostream>
#include<string.h>

using namespace std;

int main() {
	int T,N,s[100000];
	cin >> T >> N;
	
	memset(s,0,sizeof(int));

	for (int i = 0; i < T; i++) 
		cin >> s[i];

	for (int i = 0; i < T; i++)
		if (s[i] < N)
			cout << s[i] << " ";
}