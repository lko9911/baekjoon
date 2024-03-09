#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		double cal[6];
		double load = 0;
		double rad = 0;

		for (int i = 0; i < 6; i++)
			cin >> cal[i];

		load = sqrt((cal[0] - cal[3]) * (cal[0] - cal[3]) + (cal[1] - cal[4]) * (cal[1] - cal[4]));
		rad = cal[2] + cal[5];

		double large_rad = cal[2], small_rad = cal[2];
		 large_rad = cal[2] > cal[5] ? cal[2] : cal[5];
		small_rad = cal[2] < cal[5] ? cal[2] : cal[5];


		if (load != 0) {
			if (load > rad)
				cout << 0 << endl;
			else if (load == rad || large_rad == (load + small_rad))
				cout << 1 << endl;
			else if (load < rad) {
				if (load + small_rad > large_rad)
					cout << 2 << endl;
				else
					cout << 0 << endl;
			}
		}
		else {
			if (cal[2] == 0 && cal[5] == 0)
				cout << 1 << endl;
			else if (cal[2] == cal[5])
				cout << -1 << endl;
			else
				cout << 0 << endl;
		}
	
	}
}