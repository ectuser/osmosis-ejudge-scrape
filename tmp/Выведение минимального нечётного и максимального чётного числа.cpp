// #include <pch.h>
#include <iostream>
// #include <cmath>
// #include <string>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	long long n, a; cin >> n;

	long long minNot2 = -1, max2 = -1;
	bool condition_1 = false, condition_2 = false;

	for (long long i = 0; i < n; i++) {
		cin >> a;
		if (condition_1 == false && abs(a) % 2 == 1) {
			minNot2 = a;
			condition_1 = true;
		}
		else if (condition_2 == false && abs(a) % 2 == 0) {
			max2 = a;
			condition_2 = true;
		}
		else if (condition_1 == true && a < minNot2 && abs(a) % 2 == 1) {
			minNot2 = a;
		}
		else if (condition_2 == true && a > max2 && abs(a) % 2 == 0) {
			max2 = a;
		}
	}

	cout << minNot2 << " " << max2;

	return 0;
}