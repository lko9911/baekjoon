#include<iostream>

using namespace std;

int main() {
	int x, y,c,n;
	cin >> x >> y >> c >> n;

	int f = x * n + y;
	int g = c * n;

	if (f <= g && x <=c)
		cout << 1;
	else
		cout << 0;

}