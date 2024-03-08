#include<iostream>
using namespace std;

int main() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int det = (a * e - b * d);
	cout << -(-e * c + b * f)/det << " " << -(d * c - a * f)/det;
}