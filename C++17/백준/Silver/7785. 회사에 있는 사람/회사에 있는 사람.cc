#include<iostream>
#include<map>

using namespace std;

int main() {
	int log;
	string a, b;

	cin >> log;
	map<string, string,greater<>>m;

	for (int i = 0; i < log; i++) {
		cin >> a >> b;
		m.insert(pair<string, string>(a, b));
		if (b == "leave")
			m.erase(a);
	}

	map<string, string>::iterator it;
	for (it = m.begin(); it != m.end(); it++) {
		if (it->second == "enter") {
			cout << it->first << "\n";
		}
	}

}