#include<iostream>
#include<cstring>

using namespace std;

int main() {
	long long N, B;
	cin >> N >> B;

	int t, index = 0;
	char result[10000];

	//memset(result, '-1', 10000);

	for (int i = 0; i < 10000; i++)
		result[i] = '\0';

	while (N) {
		t = N % B;
		result[index++] = t < 10 ? t + '0' : t - 10 + 'A';
		N /= B;
	}

	for (int i = strlen(result)-1; i >= 0; i--) {
		if (result[i] == '\0')
			break; 
		cout << result[i];
	}
}