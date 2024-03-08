#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int n,m,card_check;
	cin >> n;
	vector<int>card(n);

	for (int i = 0; i < n; i++)
		cin >> card[i];

	cin >> m;

	sort(card.begin(), card.end());

	for (int i = 0; i < m; i++) {
		cin >> card_check;
		if (binary_search(card.begin(), card.end(), card_check))
			cout << '1' << ' ';
		else
			cout << '0' << ' ';
	}
}