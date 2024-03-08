#include<iostream>
#include<cmath>
using namespace std;

int main() {
	string N;
	int B;

	cin >> N >> B;

	int s=0;
	for (int i = 0; i < N.length();  i++) {
		char c = N[N.length() - 1 - i];
		if (c >= '0' && c <= '9')
			s += (c - '0') * pow(B, i);
		else
			s += (c - 'A'+10) * pow(B, i);
	}

	cout << s;
}

// 공부 코드 (다시 풀것)