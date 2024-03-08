#include<iostream>
using namespace std;

int check(int n) {
	int cnt = 0;
	for (int i = 1; i <= n; i++)
		if (n % i==0)
			cnt++;

	if (cnt == 2)
		return 1;
	else
		return 0;
}

int main() {
	int a, b;
	cin >> a >> b;
	int result[100000];

	int sum = 0;

	int t = 0;
	for (int i = a; i <= b; i++)
		if (check(i)) {
			sum += i;
			result[t++]=i;
		}

	if (sum == 0)
		cout << -1;
	else {
		cout << sum << endl;
		cout << result[0];
	}
}