
#include <iostream>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	long long a, b, a1, b1; cin >> a >> b;
	a1 = a; b1 = b;
	int count1 = 0, count2 = 0;
	int who = 0;

	while (a > 0 && b > 0) {
		if (a % 10 > b % 10) {
			who = 1;
		}
		else if (a % 10 < b % 10) {
			who = 2;
		}
		a /= 10; b /= 10;
	}
	if (a != 0 && b == 0) {
		cout << a1;
	}
	else if (a == 0 && b != 0) {
		cout << b1;
	}
	else if (a == 0 && b == 0) {
		if (who == 1) {
			cout << a1;
		}
		else {
			cout << b1;
		}
	}

	return 0;
}