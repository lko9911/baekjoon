#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int T;
	cin >> T;
	vector<vector<int>>ans;
	int a, b;

	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		ans.push_back({ a,b });
	}
	sort(ans.begin(), ans.end());

	for (int i = 0; i < T; i++)
		cout << ans[i][0] << ' ' << ans[i][1] << '\n';

}