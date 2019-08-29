
#include <iostream>
#include <cmath>

using namespace std;

int check(int a) {
	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int a, counter = 0, number = 2; cin >> a;

	while (counter != a) {
		if (check(number) == 1) {
			cout << number << " ";
			counter++;
		}
		number++;
	}

	return 0;
}