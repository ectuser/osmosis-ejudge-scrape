// #include <pch.h>
#include <iostream>
// #include <cmath>
// #include <string>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, s; cin >> n >> s;

	int *a = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (a[i] + a[j] == s && i != j) {
				cout << i + 1 << " " << j + 1;
				return 0;
			}
		}
	}
	cout << -1;

	return 0;
}