#include<iostream>

using namespace std;

int A[50000] = { 0 };

int MenOfPassion(int A[],int n,int* cnt) {

	int sum =0;
	for (int i = 1; i <= n; i++) {
		sum = sum + A[i];
		(*cnt)++;
	}
		return sum;
}

int main() {
	int x;
	int cnt = 0;
	cin >> x;

	MenOfPassion(A, x, &cnt);

	cout << cnt << endl << 1;
}