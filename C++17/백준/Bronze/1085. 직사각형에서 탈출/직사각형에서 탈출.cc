#include<iostream>
#include<cmath>
using namespace std;

int min(int a, int b) {
	if (a > b)
		return b;
	else
		return a;
}

int main() {
	int a, b,c,d;
	cin >> a >> b >> c >>d;
	
	int x = abs(a - c);
	int y = abs(b - d);

	int i = min(min(x, a), min(y, b));
	int j=	min(a, b);

	cout << min(i, j);
}
