#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Member {
	int p,y;
	string s;
};

int main() {
	vector<Member> team(3);

	for (int i = 0; i < 3; ++i) {
		cin >> team[i].p >> team[i].y >> team[i].s;
	}
	
	vector<int> year;
	for (int i = 0; i < 3; ++i) {
		year.push_back(team[i].y % 100);
	}
	sort(year.begin(), year.end());

	for (int y : year) {
		if (y < 10) cout << "0";
		cout << y;
	}
	cout << endl;

	sort(team.begin(), team.end(), [](const Member& a, Member& b) {
		return a.p > b.p;
		});

	for (int i = 0; i < 3; ++i) {
		cout << team[i].s[0];
	}
	
	cout << endl;

	return 0;
}