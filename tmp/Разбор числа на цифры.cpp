
#include <iostream>
#include <string>
// #include <cmath>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	long long a; cin >> a; string number = ""; int k = 0;

	while (a > 0) {
		number += to_string(a % 10);
		k++;
		a /= 10;
	}
	for (int i = k - 1; i >= 0; i--) {
		cout << number[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < k; i++) {
		cout << number[i] << " ";
	}

	return 0;
}