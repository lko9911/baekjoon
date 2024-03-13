#include<iostream>
#include<string>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		int count = 0, result=0;
		string ox;
		cin >> ox;

		for (int i = 0; i < ox.size(); i++) {
			if (ox[i] == 'O') {
				count++;
				result += count;
			}
			else
				count = 0;
		}
		cout << result << endl;
	}
}