#include <bits/stdc++.h>

using namespace std;

void decode() {
	int n;
	cin >> n;
	int a[n], ans = 0, m = 1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < n; i++) {
		if (a[i] <= a[i - 1]) {
			ans = max(ans, m);
			m = 1;
		} else {
			m++;
		}
	}
	ans = max(ans, m);
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
