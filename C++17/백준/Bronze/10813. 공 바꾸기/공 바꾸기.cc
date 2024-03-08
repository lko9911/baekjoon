#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n,m;
	int a, b;

	cin >> n >> m;
	vector<int> s(n);

	for (int i = 0; i < n; i++)
		s[i] = i+1;

	for (int i = 0; i < m; i++) {
		int tmp;
		cin >> a >> b;
		tmp = s[b-1];
		s[b-1] = s[a-1];
		s[a-1] = tmp;
	}

	for (int i = 0; i < n; i++)
		cout << s[i] << " ";

}