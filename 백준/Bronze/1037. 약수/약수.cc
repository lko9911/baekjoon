#include<iostream>
using namespace std;

int main(){
    int num = 0;
    int num_d = 0;  // lnt -> int 수정
    
    long long max = -1000001, min = 1000001;  // max는 매우 작은 값으로, min은 매우 큰 값으로 초기화
    
    cin >> num_d;  // 숫자의 개수 입력
    
    for(int i = 0; i < num_d; i++){
        cin >> num;  // 각 숫자 입력
        if(num > max)
            max = num;  // 최대값 갱신
        if(num < min)
            min = num;  // 최소값 갱신
    }
    
    cout << max * min;  // 최대값과 최소값의 곱 출력
    return 0;
}
