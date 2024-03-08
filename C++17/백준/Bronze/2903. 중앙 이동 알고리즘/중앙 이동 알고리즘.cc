#include<iostream>

using namespace std;

int main() {
	int result[16];
	int blank[16],c[16];

	blank[0] = 1;
	for (int i = 0; i < 15; i++)
		blank[i + 1] = blank[i] * 4;

	c[0] = 4;
	for (int i = 0; i < 15; i++)
		c[i + 1] = c[i] * 2 + blank[i]*4;

	result[0] = 4;
	for (int i = 0; i < 15; i++)
		result[i + 1] = c[i]  + blank[i] +result[i];

	int n;
	cin >> n;
	cout << result[n];
}