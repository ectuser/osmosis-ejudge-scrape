// #include <pch.h>
#include <iostream>
// #include <cmath>
// #include <string>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, delta, a, b; cin >> n;

	cin >> a >> b;

	delta = b - a;

	for (int i = 2; i < n; i++) {
		a = b; cin >> b; 
		if (delta != b - a) {
			cout << 0;
			return 0;
		}
		delta = b - a;
	}
	cout << 1;

	return 0;
}