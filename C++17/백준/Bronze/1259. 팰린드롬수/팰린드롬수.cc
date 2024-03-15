#include<iostream>
#include<string>
using namespace std;

int main() {
	while (1) {
		string n;
		cin >> n;
		if (n[0] == '0')
			break;

		bool check = true;

		for (int i = 0; i < n.length()/2; i++) {
			if (n[i] != n[n.length() - i - 1]) {
				check = false;
					cout << "no" << endl;
					break;
				}
			}
		if (check)
			cout << "yes" << endl;
	}
}