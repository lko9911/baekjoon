#include<iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int number[101] = { 0 };

    for (int i = 0; i < N; i++) {
        cin >> number[i];
    }

    long long result[1000000] = { 0 };
    int a = 0;

    for (int i = 0; i < N - 2; i++)
        for (int j = i + 1; j < N - 1; j++)
            for (int k = j + 1; k < N; k++)
                result[a++] = number[i] + number[j] + number[k];

    long long max = -1;

    for (int i = 0; i < a; i++)
        if (max <= result[i] && result[i] <= M)
            max = result[i];

    cout << max;

    return 0;
}