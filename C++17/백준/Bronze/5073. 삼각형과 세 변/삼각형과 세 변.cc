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

	while (1) {
		cin >> x >> y >> z;
		if (x == 0 && y == 0 && z == 0)
			break;
		int a = max(x, y, z);

		if (a >= (x + y + z - a)) {
			cout << "Invalid" << endl;
			continue;

		}
		if (x == y && y == z)
			cout << "Equilateral"<<endl;
		else if (x == y || y == z || x == z)
			cout << "Isosceles"<<endl;
		else
			cout << "Scalene" << endl;
	}
	}