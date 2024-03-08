#include<iostream>

using namespace std;

int A[50000] = { 0 };

int MenOfPassion(int A[],int n,int* cnt) {
	(*cnt)++;
int i = n / 2;
	return A[i]; 
			
}

int main() {
	int x;
	int cnt = 0;
	cin >> x;

	MenOfPassion(A, x, &cnt);

	cout << cnt << endl << 0;
}