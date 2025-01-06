#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    a = (a / 100) * 100;

    while (true) {
        if (a % b == 0) {
            break;
        }
        a++;
    }

    string result = to_string(a);
    cout << result.substr(result.size() - 2) << endl;

    return 0;
}
