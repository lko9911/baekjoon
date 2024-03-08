#include<iostream>
using namespace std;

int main() {
	int result[1000] = {0};
	int n, k;

	cin >> n >> k;

	for (int i = 0; i < n; i++)
		cin >> result[i];

	for (int i = 0; i < n-1; i++)
		for (int j = i + 1; j < n; j++)
			if (result[i] < result[j]) {
				int tmp = result[i];
				result[i] = result[j];
				result[j] = tmp;
			}

	cout << result[k - 1];
}	