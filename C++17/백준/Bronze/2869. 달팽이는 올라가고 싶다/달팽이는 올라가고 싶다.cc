#include<iostream>

using namespace std;

int main() {
	long long A, B, V;
	cin >> A >> B >> V;

	if (V - A == 0)
		cout << 1;
	else if ((V - A) % (A - B) == 0)
		cout << (V - A) / (A - B) + 1;
	else 
		cout << (V - A) / (A - B) + 2;
	// 반례 6 2 14 6 2 15
}