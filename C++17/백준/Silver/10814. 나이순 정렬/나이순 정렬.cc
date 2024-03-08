#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

string s[20000];

bool compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main() {
	int T;
	cin >> T;
	
	pair<int, string>tmp;
	vector<pair<int, string>>s;

	for (int i = 0; i < T; i++) {
		cin >> tmp.first >> tmp.second;
		s.push_back(tmp);
	}

	stable_sort(s.begin(), s.end(), compare);

	for (int i = 0; i < T; i++)
		cout << s[i].first << ' ' << s[i].second << '\n';
}