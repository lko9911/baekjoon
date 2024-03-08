#include<iostream>

using namespace std;

int main() {
	int s[30];
	int n = 0;
	
	for (int i = 0; i < 30; i++)
		s[i] = 0;

	for (int i = 0; i < 28; i++) {
	cin >> n;
	s[n-1] = 1;
    }


	for (int i = 0; i < 30; i++)
		if (s[i] == 0)
			cout << i + 1 << endl;
}