#include<iostream>
#include<cmath>

using namespace std;

int x_1, y_1, x_2, y_2;

int check(int x, int y, int r) {

    if (pow((x - x_1),2) + pow(y - y_1, 2) < pow(r, 2) && pow((x - x_2), 2) + pow(y - y_2, 2) > pow(r, 2))
        return 1;
    if (pow((x - x_1), 2) + pow(y - y_1, 2) > pow(r, 2) && pow((x - x_2), 2) + pow(y - y_2, 2) < pow(r, 2))
        return 1;

    return 0;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, result = 0;
        cin >> x_1 >> y_1 >> x_2 >> y_2;
        cin >> n;

        while (n--) {
            int x, y, r;
            int temp = 0;
            cin >> x >> y >> r;
            temp = check(x, y, r);
            result += temp;
        }
        cout << result << endl;
    }
}