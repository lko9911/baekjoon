#include<iostream>
#define MAX_SIZE 500000
#define INF 10000000

using namespace std;

int a[MAX_SIZE + 1], cnt[2 * INF + 1];

int main() {
	int n, m, tmp;
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		cnt[tmp + INF]++;
	}
	cin >> m;

	for (int i = 0; i < m; i++) 
		cin >> a[i];

		for (int i = 0; i < m; i++)
			cout << cnt[a[i] + INF] << ' ';

}