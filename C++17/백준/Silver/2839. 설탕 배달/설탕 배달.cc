#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<vector<int>> result;
	cin >> n;

	result.resize(n, vector<int>(n, 9999));

	for (int i = 0; i < result.size(); i++)
		for (int j = 0; j < result.size(); j++)
			result[i][j] = 9999;

	for (int i = 0; i < result.size(); i++)
		for (int j = 0; j < result.size(); j++)
			if (5 * i + j * 3 == n) {
				result[i][j] = i + j;
			}

	int min = 9999;
	for (int i = 0; i < result.size(); i++)
		for (int j = 0; j < result.size(); j++)
			if (min > result[i][j]) {
				min = result[i][j];
			}




	if (min == 9999)
		cout << -1;
	else
		cout << min;
}