#include<iostream>

using namespace std;

int main() {
	int degree_1,degree_2,degree_3;
	cin >> degree_1 >> degree_2 >> degree_3;
	if (degree_1 == 60 && degree_2 == 60 && degree_3 == 60) {
		cout << "Equilateral";
		return  0;
	}

	int sum = degree_1 + degree_2 + degree_3;

	if (sum == 180)
		if (degree_1 == degree_2 || degree_2 == degree_3 || degree_1 == degree_3)
			cout << "Isosceles";
		else
			cout << "Scalene";
	else
		cout << "Error";

	}