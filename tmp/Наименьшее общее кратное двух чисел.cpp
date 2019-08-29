// #include <pch.h>
#include <iostream>
// #include <cmath>
// #include <string>

long long NOK(long long a, long long b) {
	for (int i = 1; i <= a; i++) {
		if ((i * b) % a == 0) {
			return i * b;
		}
	}
}

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	long long a, b; cin >> a >> b;

	if (a > b) {
		cout << NOK(a, b);
	}
	else {
		cout << NOK(b, a);
	}

	return 0;
}