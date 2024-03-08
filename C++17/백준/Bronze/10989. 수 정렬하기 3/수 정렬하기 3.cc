#include<iostream>

using namespace std;

int main() {
	int n;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	int ans[10001] = {0};

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		ans[a] += 1;
	}


	for (int i = 1; i < 10001; i++)
		for(int j=0;j<ans[i];j++)
		cout << i << '\n';
}