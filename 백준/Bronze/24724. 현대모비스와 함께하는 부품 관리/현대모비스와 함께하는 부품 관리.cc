#include <iostream>
using namespace std;

int main() {
	int T = 0, x=0;
	cin >> T;

	while (T) {
		int N = 0;
		cin >> N;
		N++;
		while (N) {
			int A = 0, B = 0;
			cin >> A >> B;
			N--;
		}
		x++;
		cout << "Material Management" << " " << x << endl;
		cout << "Classification ---- End!" << endl;
		T--;
	}

	return 0;
}