#include<iostream>
using namespace std;

int main() {
	int result[5] = {0};

	for (int i = 0; i < 5; i++)
		cin >> result[i];

	for (int i = 0; i < 4; i++)
		for (int j = i + 1; j < 5; j++)
			if (result[i] > result[j]) {
				int tmp = result[i];
				result[i] = result[j];
				result[j] = tmp;
			}

	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += result[i];

	cout << sum /5 << endl << result[2];
}	
