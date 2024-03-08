#include<iostream>

using namespace std;

int A[50000] = { 0 };

/*int MenOfPassion(int A[], int n, int* cnt) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++) {
		sum = sum + A[i] * A[j];
		(*cnt)++;
			}
			return sum;
} */

int main() {
	long long x;
	int cnt = 0;
	cin >> x;

//	MenOfPassion(A, x, &cnt);

	cout << x*x << endl << 2;
}