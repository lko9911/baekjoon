#include<iostream>
using namespace std;

int main() {
    int x, y;
    int a[3];
    cin >> x >> y;
    a[0] = y / 100;
    a[1] = (y % 100) / 10;
    a[2] = ((y % 100) % 10);

    for (int i = 2; i >= 0; i--) 
        cout << a[i] * x << endl;
    
    cout << x*y << endl;
}