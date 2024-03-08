#include<iostream>

using namespace std;

int main() {

	int land_x, land_y;
	int T;
	cin >> T;
	int min_x = 10001;
	int max_x = -10001;
	int max_y = -10001;
	int min_y = 10001;

	while (T--) {
		cin >> land_x >> land_y;
		
			if (min_x > land_x)
				min_x = land_x;
			if (max_x < land_x)
				max_x = land_x;
			if (max_y < land_y)
				max_y = land_y;
			if (min_y > land_y)
				min_y = land_y;
		}
		cout << (max_x - min_x)*(max_y - min_y);

	}