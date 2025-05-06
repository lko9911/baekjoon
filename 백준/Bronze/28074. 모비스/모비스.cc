#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	cin >> input;

	bool hasM = false, hasO = false, hasB = false, hasI = false, hasS = false;

	for (char c : input) {
		if (c == 'M') hasM = true;
		else if (c == 'O') hasO = true;
		else if (c == 'B') hasB = true;
		else if (c == 'I') hasI = true;
		else if (c == 'S') hasS = true;
	}

	if (hasM && hasO && hasB && hasI && hasS) cout << "YES";
	else cout << "NO";

	return 0;
}