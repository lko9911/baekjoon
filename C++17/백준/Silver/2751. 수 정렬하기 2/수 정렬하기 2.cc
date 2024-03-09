#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	vector<int>result;
	int n;

	cin >> n;


	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		result.push_back(num);
	}

	sort(result.begin(),result.end());

	for (int i = 0; i < n; i++)
		cout << result[i] << '\n';

}	
