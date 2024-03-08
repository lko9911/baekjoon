#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {
    
    cin.tie(NULL);
	ios_base::sync_with_stdio(false);
    
    map<string, int>m_1;
    map<int, string>m_2;
    int a, b;
    string str;
    cin >> a >> b;
    for (int i = 1; i <= a; i++) {
        cin >> str;
        m_1 .insert(pair<string, int>(str, i));
        m_2 .insert(pair<int, string>(i, str));
    }

    string check;
    for (int i = 0; i < b; i++) {
        cin >> check;

        if (check[0] > '9') {
            cout << m_1[check] << '\n';
        }
        else
            cout << m_2[stoi(check)] << '\n';
    }
}