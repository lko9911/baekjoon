#include<iostream>
#include<string>

using namespace std;

int main() {
	string n;

	while (getline(cin,n)) {
		if (n.empty()) {
		
			return 0;
		}
		cout << n << endl;
	}
}