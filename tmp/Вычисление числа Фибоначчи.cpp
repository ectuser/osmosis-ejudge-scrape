// #include <pch.h>
#include <iostream>
// #include <cmath>
// #include <string>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, a, b, c; cin >> n;
	
	a = 0; b = 1; c = a + b;

	if (n == 1) { cout << a; return 0; }
	else if (n == 2) { cout << b; return 0; }
	else if (n == 3) { cout << c; return 0; }

	for (int i = 4; i <= n; i++) {
		a = b; b = c; c = a + b;
	}
	cout << c;



	return 0;
}