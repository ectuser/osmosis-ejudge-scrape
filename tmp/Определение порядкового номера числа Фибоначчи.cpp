// #include <pch.h>
#include <iostream>
// #include <cmath>
// #include <string>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, a, b, c, i = 3; cin >> n;
	
	a = 0; b = 1;  c = a + b;

	if (n == 0) {
		cout << 1; return 0;
	}

	while (c != n) {
		a = b; b = c; c = a + b; i++;
		
	}
	cout << i;

	return 0;
}