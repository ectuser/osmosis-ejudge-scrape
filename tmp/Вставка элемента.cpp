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

	int *A = new int[n + 1];

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	int pos, number; cin >> pos >> number; pos--;

	for (int i = n; i >= pos; i--) {
		A[i] = A[i - 1];
	}
	A[pos] = number;
	for (int i = 0; i < n + 1; i++) {
		cout << A[i] << " ";
	}
	
	return 0;
}