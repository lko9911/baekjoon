#include<iostream>
using namespace std;

int main() {
	int x_1, y_1, x_2, y_2,x_3,y_3;
	cin >> x_1 >> y_1 >> x_2 >> y_2 >> x_3 >> y_3;

	int x, y;

	if (x_1 == x_2)
		x = x_3;
	else if (x_1 == x_3)
		x = x_2;
	else
		x = x_1;
	if (y_1 == y_2)
		y = y_3;
	else if (y_1 == y_3)
		y = y_2;
	else
		y = y_1;

	cout << x << " " << y;
}