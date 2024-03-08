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
   // endl은 항상 buffer flush를 같이 해주기 때문에 느립니다. '\n'을 쓰시면 통과되실 거 같아요.
}	
