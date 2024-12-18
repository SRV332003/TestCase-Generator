#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;

	int a[n];
	long long sum = 0;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}

	sum %= k;

	int next = k - sum;
	int prev = sum & 1;
	if(sum & 1) sum++;

	prev += sum / 2;

	cout << min(prev, next) << "\n";

}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}