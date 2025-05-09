#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int main() {
	int T, num=0;
	cin >> T;

	long long s_x, s_y, e_x, e_y;
	cin >> s_x >> s_y >> e_x >> e_y;

	vector<vector<pair<long long, long long>>> navigation(T);

	for (int i = 0; i < T; ++i) {
		int M;
		cin >> M;
		navigation[i].resize(M);
		for (int j = 0; j < M; ++j) {
			long long x, y;
			cin >> x >> y;
			navigation[i][j] = {x, y};

		}
	}

	long long min_cost = LLONG_MAX;
	int min_index = -1;

	for (int i = 0; i < T;++i) {
		long long total_cost = 0;
		long long prev_x = s_x, prev_y = s_y;

		for (const auto& point : navigation[i]) {
			long long x = point.first;
			long long y = point.second;
			total_cost += llabs(x - prev_x) + llabs(y - prev_y);
			prev_x = x;
			prev_y = y;
		}

		total_cost += llabs(e_x - prev_x) + llabs(e_y - prev_y);

		if (total_cost < min_cost) {
			min_cost = total_cost;
			min_index = i;
		}
	}

	cout << min_index+1 << endl;

	return 0;
}