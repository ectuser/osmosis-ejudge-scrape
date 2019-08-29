
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int a, amount = 1; cin >> a;

	for (int i = 2; i < sqrt(a); i++) {
		if (a % i == 0) {
			amount++;
		}
	}
	if (sqrt(a) == int(sqrt(a))) {
		amount *= 2; amount--;
	}
	else {
		amount *= 2;
	}
	cout << amount;

	return 0;
}