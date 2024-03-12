#include<iostream>
#include<string>
using namespace std;

int main() {
	string num;
	getline(cin, num);
	if (num == "1 2 3 4 5 6 7 8")
		cout << "ascending";
	else if (num == "8 7 6 5 4 3 2 1")
		cout << "descending";
	else
		cout << "mixed";
}