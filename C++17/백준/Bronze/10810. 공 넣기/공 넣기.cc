#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n,m;
	int a, b, c;

	cin >> n >> m;
	vector<int> s(n);

	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		for (int j = a - 1; j < b; j++)
			s[j] = c;
	}
	for (int i = 0; i < n; i++)
		cout << s[i] << " ";

}