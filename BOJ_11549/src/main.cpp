#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;

	auto answer = int{ 0 };
	for (int i = 0; i < 5; ++i) {
		int x;
		cin >> x;

		if (t == x) {
			answer += 1;
		}
	}

	cout << answer;

	return 0;
}