#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	vector<int> s(N);

	for (int i = 0; i < N; i++)
		s[i] = i+1;

	int a=0, b=0;

	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		reverse(s.begin() + a - 1, s.begin() + b);
	}
	for (int i = 0; i < N; i++) 
		cout << s[i] << " ";
}