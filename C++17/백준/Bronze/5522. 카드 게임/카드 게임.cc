#include<iostream>
using namespace std;

int main(){
    int n, result = 0;
    for(int i=0;i<5;i++){
        cin >> n;
        result += n;
    }
    cout << result;
}