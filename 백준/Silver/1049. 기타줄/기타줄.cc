#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m; 
    cin >> n >> m;

    vector<pair<int, int>> price_list;

    for (int i = 0; i < m; i++) {
        int six_price, one_price;
        cin >> six_price >> one_price;
        price_list.push_back({six_price, one_price});
    }

    // 묶음 가격과 낱개 가격을 각각 기준으로 정렬
    sort(price_list.begin(), price_list.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first < b.first; // 묶음 가격 기준 오름차순
    });
    int six_price = price_list[0].first;

    sort(price_list.begin(), price_list.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second; // 낱개 가격 기준 오름차순
    });
    int one_price = price_list[0].second;

    int answer = 0;

    // 묶음과 낱개 조합 계산
    if (six_price <= one_price * 6) {
        answer = six_price * (n / 6) + one_price * (n % 6);
        if (six_price < one_price * (n % 6)) {
            answer = six_price * ((n / 6) + 1);
        }
    } else {
        answer = one_price * n;
    }

    cout << answer << endl;

    return 0;
}
