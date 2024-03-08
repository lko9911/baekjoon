#include<iostream>

using namespace std;

int main() {
	string s,score;
	float n;

	float cnt = 0.0;
	float result = 0.0;
	for (int i = 0; i < 20; i++) {
		float cal=0.0;
		cin >> s >> n >> score;
		if (score == "A+")
			cal = 4.5;
		else if (score == "A0")
			cal = 4.0;
		else if (score == "B+")
			cal = 3.5;
		else if (score == "B0")
			cal = 3.0;
		else if (score == "C+")
			cal = 2.5;
		else if (score == "C0")
			cal = 2.0;
		else if (score == "D+")
			cal = 1.5;
		else if (score == "D0")
			cal = 1.0;
		else if (score == "F")
			cal = 0.0;
		else {
			n = 0;
			cal = 0.0;
		}
		cnt += n;

		result += n* cal;
	}
	float avg = result / cnt;

	cout.precision(6);
	cout << fixed;
	cout << avg;
	cout.unsetf(ios::fixed);
}