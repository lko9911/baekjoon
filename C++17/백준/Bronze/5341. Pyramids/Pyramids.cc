#include <iostream>
using namespace std;

int main() {
	int n;
	while(cin >> n){
		if (n == 0)
			break;
		int result = 0;
		for (int i = 1; i <= n; i++) {
			result += i;
		}
		cout << result << endl;
	}
}