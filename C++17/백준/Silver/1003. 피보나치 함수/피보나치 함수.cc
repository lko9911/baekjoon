#include<iostream>
using namespace std;

int dp[41] = {0,1,1};
// dp[0] = 0, dp[1] = 1, dp[2] = 1

int main() {
	
	for (int i = 3; i < 41; i++)
		dp[i] = dp[i - 2] + dp[i - 1];
	
	int T;
	cin >> T;
	
	while (T--) {
		int num;
		cin >> num;
		if (num == 0)
			cout << 1 << ' ' << 0 << endl;
		else if (num == 1)
			cout << 0 << ' ' << 1 << endl;
		else
			cout << dp[num - 1] << ' ' << dp[num] << endl;
	}
}