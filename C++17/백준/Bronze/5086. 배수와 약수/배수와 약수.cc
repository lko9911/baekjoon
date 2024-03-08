#include<iostream>

using namespace std;

int main() {
	int x, y;

	while (1) {
		cin >> x >> y;
		if (x == 0 && y == 0)
			break;

		if (x % y == 0 || y % x == 0)
			if (x > y)
				cout << "multiple" << endl;
			else
				cout << "factor" << endl;
		else
			cout << "neither" << endl;
		
	}
}