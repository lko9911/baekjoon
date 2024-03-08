#include<iostream>
#include<set>

using namespace std;

int main() {
	string s;
	cin >> s;

	set<string>str;

	for (int i = 0; i < s.length(); i++) {
		string tmp = "";
		for (int j = i; j < s.length(); j++) {
			tmp += s[j];
			str.insert(tmp);
		}
	}
	cout << str.size();
}