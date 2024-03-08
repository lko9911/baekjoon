#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	string ans;
	
	int number[10] = {0};

	cin >> ans;


	for (int i = 0; i < ans.length(); i++)
		number[i] = ans[i] - '0';

	
	sort(number, number + ans.length(), greater<int>());
	

	for (int i = 0; i < ans.length(); i++)
		cout << number[i];
		
}	
