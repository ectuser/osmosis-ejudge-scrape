// #include <pch.h>
#include <iostream>
// #include <cmath>
// #include <string>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n; cin >> n;
	int numbs[10] = { 0,0,0,0,0,0,0,0,0 };

	while (n > 0) {
		numbs[n % 10]++;
		n /= 10;
	}
	for (int i = 0; i < 10; i++) {
		if (numbs[i] > 0) {
			cout << i << " ";
		}
	}

	return 0;
}