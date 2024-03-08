#include<iostream>
using namespace std;

int main() {
    int s[6] = { 1,1,2,2,2,8 };
    int sol[6];

    for (int i = 0; i < 6; i++)
        cin >> sol[i];

    for (int i = 0; i < 6; i++)
        cout << s[i] - sol[i] << " ";
}