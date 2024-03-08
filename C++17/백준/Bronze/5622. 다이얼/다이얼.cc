#include<iostream>

using namespace std;

int main() {
	char n[16];
	
	cin >> n;

	int result = 0;
	for (int i = 0; i < 16; i++) {
		if (n[i] >= 65 && n[i] <= 67)
			result += 3;
		if (n[i] >= 68 && n[i] <= 70)
			result += 4;
		if (n[i] >= 71 && n[i] <= 73)
			result += 5;
		if (n[i] >= 74 && n[i] <= 76)
			result += 6;
		if (n[i] >= 77 && n[i] <= 79)
			result += 7;
		if (n[i] >= 80 && n[i] <= 83)
			result += 8;
		if (n[i] >= 84 && n[i] <= 86)
			result += 9;
		if (n[i] >= 87 && n[i] <= 90)
			result += 10;
		if (n[i] == '\0')
			break;
	}

	cout << result;
}