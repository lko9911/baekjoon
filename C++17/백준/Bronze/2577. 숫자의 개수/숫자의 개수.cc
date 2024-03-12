#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int dif = a * b * c;
	string d = to_string(dif);
	
	for (int i = 0; i < 10; i++) {
		int count = 0;
		for (int j = 0; j < d.size(); j++)
			if (d[j]=='0'+i)
				count++;
		cout << count << endl;
	} 
}