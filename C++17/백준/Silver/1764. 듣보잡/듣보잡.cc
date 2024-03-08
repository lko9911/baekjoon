#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, M, count = 0;
	cin >> N >> M;

	map<string, bool>m;
	string s;
	vector<string>result;

	for (int i = 0; i < N; i++) {
		cin >> s;
		m.insert(pair<string, bool>(s, true));
	}

	for (int i = 0; i < M; i++) {
		cin >> s;
		if (m[s]) {
			result.push_back(s);
			count++;
		}
	}
	cout << count << '\n';
	
	sort(result.begin(), result.end());


	for (int i = 0; i < result.size(); i++)
		cout << result[i] << '\n';
	
}