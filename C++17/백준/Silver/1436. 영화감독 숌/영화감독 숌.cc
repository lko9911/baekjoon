#include <iostream>
using namespace std;

int main() {
	int n,cnt=0,result=0;
	cin >> n;

	while (n != cnt) {
		result++;
		int tmp = result;

		while (tmp != 0) {
			if (tmp % 1000 == 666) {
				cnt++;
				break;
			}
			else
				tmp /= 10;
		}
	}
	cout << result;
}