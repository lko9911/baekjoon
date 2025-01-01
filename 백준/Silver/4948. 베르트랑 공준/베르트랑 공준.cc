#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int MAX = 246912;
    vector<int> check(MAX + 1, 1); 
    check[0] = check[1] = 0;       
    
    // 에라토스테네스의 체
    for (int i = 2; i * i <= MAX; i++) {
        if (check[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                check[j] = 0;
            }
        }
    }

    while (true) {
        int x;
        cin >> x;
        if (x == 0) break;

        int count = 0;
        for (int i = x + 1; i <= 2 * x; i++) {
            if (check[i]) {
                count++;
            }
        }

        cout << count << endl;
    }
}