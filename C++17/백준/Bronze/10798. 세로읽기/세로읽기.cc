#include<iostream>

using namespace std;

int main() {
	char q[17][5];

	
	for (int i = 0; i < 17; i++)
		for (int j = 0; j < 5; j++)
			q[i][j] = NULL;

	for (int j = 0; j < 5; j++) {
		string c;
		cin >> c;
		for (int i = 0; i < c.length(); i++)
			q[i][j] = c[i];
	}

	for (int i = 0; i < 17; i++)
		for (int j = 0; j < 5; j++) {
			if (q[i][j] == NULL)
				continue;
				cout << q[i][j];
		}

}