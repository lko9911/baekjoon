#include<iostream>
#include<string>

using namespace std;

int main() {
	string s;
	
	getline(cin, s);
	
	int cnt = 0;
	for (int i = 1; i < s.length(); i++)
		if (s[i] == ' ')
			cnt++;

	if (s[s.length() - 1] == ' ')
		cnt--;

	cout << cnt+1;
}