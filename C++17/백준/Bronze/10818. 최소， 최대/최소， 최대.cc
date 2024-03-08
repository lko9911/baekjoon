#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;

	cin >> n;
	vector<int> s(n);

	for (int i = 0; i < n; i++)
		cin >> s[i];

	int max = s[0];
	int min = s[0];

	for (int i = 0; i < n; i++) {
		if (max < s[i])
			max = s[i];
		if (min > s[i])
			min = s[i];
	}

	cout << min << " " << max;
}