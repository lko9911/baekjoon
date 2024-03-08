#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int result = 0;
    for (int i = 0; i < N; i++) {
        int sum = 0;
        int n = i;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        if (sum + i == N) {
            result = i;
            break;
        }
    }
    cout << result;
}