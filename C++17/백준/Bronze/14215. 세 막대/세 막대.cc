#include<iostream>

using namespace std;

int max(int a, int b, int c) {
	int x=0;

	if (a > b && a > c)
		x = a;
	else if(b > a && b > c)
		x = b;
	else if(c >a && c > b)
		x = c;

		return x;
}

int main() {
	int x, y, z;
		cin >> x >> y >> z;
		int a = max(x, y, z);

		if (a < (x + y + z - a))
			cout << x + y + z;
		else
			cout << (x + y + z - a) * 2 - 1;
	
	}