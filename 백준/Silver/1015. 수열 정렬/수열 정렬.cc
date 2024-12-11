#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int num;
    cin >> num;
    
    vector<int> v(num);
    
    // 배열 입력 받기
    for (int i = 0; i < num; i++) {
        cin >> v[i];
    }
    
    // v의 복사본을 만들어 정렬
    vector<int> sort_v = v;
    sort(sort_v.begin(), sort_v.end());
    
    // P 배열 초기화
    vector<int> P;
    
    // A 배열의 각 원소에 대해 sort_v에서의 위치를 찾고 P에 저장
    for (int i = 0; i < num; i++) {
        auto it = find(sort_v.begin(), sort_v.end(), v[i]);
        int index = distance(sort_v.begin(), it);
        P.push_back(index);
        
        // 해당 값은 다시 찾지 않도록 -1로 설정
        sort_v[index] = -1;
    }
    
    // 결과 출력
    for (int i = 0; i < num; i++) {
        cout << P[i] << " ";
    }
}
