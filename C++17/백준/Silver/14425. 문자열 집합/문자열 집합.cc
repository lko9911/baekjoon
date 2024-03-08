#include<iostream>
#include<map>

using namespace std;

int main() {
	int N, M,count=0;
	cin >> N >> M;

	map<string, bool>m;
	string s;

	for (int i = 0; i < N; i++) {
		cin >> s;
		m.insert(pair<string, bool>(s, true));
	}

	for (int i = 0; i < M; i++) {
		cin >> s;
		if (m[s] == true)
			count++;
	}
	cout << count;
}