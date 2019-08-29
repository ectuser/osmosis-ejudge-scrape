// #include <pch.h>
#include <iostream>
// #include <vector>
// #include <cmath>
// #include <string>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n; cin >> n;

	int *A = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < n; i++) {
		if (A[i] % 2 == 0) {
			cout << A[i] << " ";
		}
	}

	return 0;
}