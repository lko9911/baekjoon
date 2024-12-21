#include <iostream>
#include <regex>
using namespace std;

int t;
string s;
regex pattern("(100+1+|01)+");

int main(){
    cin >> t;
    while(t--){
        cin >> s;
        cout << (regex_match(s,pattern) ? "YES\n" : "NO\n");
    }
}