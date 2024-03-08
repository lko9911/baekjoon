#include<iostream>
using namespace std;

int main() {
    int x, s=0;
    cin >> x;
    for (int i = 1; i <= x; i++)
        s += i;

    cout << s;
}