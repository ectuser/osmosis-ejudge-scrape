
#include <iostream>
// #include <vector>
// #include <cmath>
// #include <string>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, k, m, sum = 0; cin >> n >> k >> m;
	k--; m--;
	int *a = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = k; i <= m; i++) {
		// cout << i << " " << a[i] << endl;
		sum += a[i];
	}
	cout << sum;

	return 0;
}