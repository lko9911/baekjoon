#include<iostream>

using namespace std;

int main() {
	long long n;

	cin >> n;
	int check = 0;
	int cnt = 0;
	int f = 1;
	while (1) {
		
		check += 6;

		f += check;
		cnt++;

		if (f >= n)
			break;
	}

	if (n == 1)
		cout << 1;
	else
	cout << cnt+1;
}