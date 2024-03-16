#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 입력받은 값들의 차이에 대한 최소 공배수를 찾아야 함

int check(int a, int b) { // 최소공배수 알고리즘
	if (b == 0)
		return a;
	return check(b, a % b);
}

int main() {
	int n;
	cin >> n;
	vector<int>v(n), diff;

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n - 1; i++)
		diff.push_back(v[i + 1] - v[i]);

	int c = diff[0];
	for (int i = 0; i < diff.size(); i++)
		c = check(c, diff[i]);

	int result = (v[n - 1] - v[0]) / c;
	cout << result - (n - 1);
}