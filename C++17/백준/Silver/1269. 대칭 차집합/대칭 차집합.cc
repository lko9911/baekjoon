#include<iostream>
#include<map>

using namespace std;

int main() {

	int N, M,num;
	cin >> N >> M;

	map<int,bool>m;

	for (int i = 0; i < N+M; i++) {
		cin >> num;
		if (m[num])
			m.erase(num);
		else
			m[num] = true;
	}
	cout << m.size();
}