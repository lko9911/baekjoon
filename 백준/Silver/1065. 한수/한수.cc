#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int count = 0;

    for (int i = 1; i <= N; i++) {
        if (i < 100) {
            count++; // 1~99는 모두 한수
        } else {
            int hundreds = i / 100;
            int tens = (i / 10) % 10;
            int ones = i % 10;
            if (tens - hundreds == ones - tens) {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}