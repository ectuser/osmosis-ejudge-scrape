// #include <pch.h>
#include <iostream>
// #include <cmath>
// #include <string>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int x1, x2, l; cin >> x1 >> x2 >> l;

	int sum = x1; cout << sum << " ";

	while (sum != x2) {
		sum += l; cout << sum << " ";
	}

	return 0;
}