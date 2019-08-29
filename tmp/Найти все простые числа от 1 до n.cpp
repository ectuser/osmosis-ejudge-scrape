
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

	int a; cin >> a;

	for (int i = 2; i <= a; i++) {
		if (check(i) == 1) {
			cout << i << " ";
		}
	}

	return 0;
}