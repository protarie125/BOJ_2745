#include <iostream>
#include <string>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	int b;
	cin >> b;

	const auto& n = static_cast<int>(s.length());

	auto ans = ll{ 0 };
	auto m = ll{ 1 };
	for (auto i = n - 1; 0 <= i; --i) {
		const auto& x = s[i];

		if ('0' <= x && x <= '9') {
			ans += m * (x - '0');
		}
		else if ('A' <= x && x <= 'Z') {
			ans += m * (x - 'A' + 10);
		}

		m *= b;
	}

	cout << ans;

	return 0;
}