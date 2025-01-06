#include <iostream>
#include <vector>
#include <string>
#include <cmath> 
#include <algorithm>
using namespace std;

int main() {

    vector<string> color = {
        "black", "brown", "red", "orange", "yellow", 
        "green", "blue", "violet", "grey", "white"
    };

    string input1, input2, input3;
    cin >> input1 >> input2 >> input3;

    int a = find(color.begin(), color.end(), input1) - color.begin();
    int b = find(color.begin(), color.end(), input2) - color.begin();
    int c = find(color.begin(), color.end(), input3) - color.begin();

    long long result = stoll(to_string(a) + to_string(b)) * static_cast<long long>(pow(10, c));
    
    cout << result << endl;

    return 0;
}
