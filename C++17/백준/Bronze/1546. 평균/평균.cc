#include<iostream>
#include<string.h>

using namespace std;

int main() {
	double s[1000];
	double T, sum = 0.0;
	cin >> T;

	memset(s, 0, sizeof(double));

	for (int i = 0; i < T; i++) 
		cin >> s[i];
	
	double max = s[0];

	for (int i = 1; i < T; i++)
		if (max < s[i])
			max = s[i];

	for (int i = 0; i < T; i++) {
		s[i] = s[i] / max * 100;
		sum += s[i];
	}

	cout.precision(6);
	cout << fixed;
	cout << sum / T;

	}