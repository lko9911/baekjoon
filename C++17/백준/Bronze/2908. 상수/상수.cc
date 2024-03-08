#include<iostream>

using namespace std;

char a[4], b[4];

int turn_int(char y[]) {
	int n = 0;

	n = y[0] - '0';
	n += (y[1] - '0') * 10;
	n += (y[2] - '0') * 100;

	return n;
}

int main() {

	cin >> a >> b;
	
	int e = turn_int(a);
	int f = turn_int(b);

	int max = (e > f) ? e : f;

	cout << max;

}