#include<iostream>
#include<string>
using namespace std;

char check[] = { 'a','e','i','o','u','A','E','I','O','U' };

int main() {
	string s;
	while (1) {
		getline(cin, s);
		if (s == "#")
			break;
		int count = 0;
		for (int i = 0; i < s.size(); i++) {
			for (int j = 0; j < 10; j++)
				if (s[i] == check[j])
					count++;
		}
		cout << count << endl;
		
	}
}