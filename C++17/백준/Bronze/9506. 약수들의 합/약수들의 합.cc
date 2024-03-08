#include<iostream>

using namespace std;

int main() {
	int x;
	int result[1000] = { 0 };

	while (1) {
		x = 0;
		cin >> x;
		if (x == -1)
			break;

		int cnt = 0, a = 0;

			for (int i = 1; i <= x; i++)
				if (x % i == 0) {
					result[a] = i;
					cnt++;
					a++;
				}

		int sum = 0;

		for (int i = 0; i < cnt - 1; i++)
			sum += result[i];

		if (sum == x) {
			cout << x << " = " << result[0];
			for (int i = 1; i < cnt - 1; i++)
				cout << " + " << result[i];
		}
		else
			cout << x << " is NOT perfect. ";
		cout << endl;
	}
}
