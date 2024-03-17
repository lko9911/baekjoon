#include<iostream>
#include<vector>
using namespace std;

void check(vector<int>& x,int n) { // 에라토스테네스의 체 알고리즘
	for (int i = 2; i * i <= n; i++) {
		if (x[i] == 0)
			continue;
		for (int j = i * i; j <= n; j += i)
			x[j] = 0;
	}
}

int main() {
	int m, n;
		cin >> m >> n;
		vector<int>v(n+1);
		v[0] = v[1] = 0;

		for (int i = 2; i <= n; i++)
			v[i] = i;

		check(v,n);

		for (int i = m; i <= n; i++)
			if (v[i] != 0)
				cout << v[i] << '\n';
				
}