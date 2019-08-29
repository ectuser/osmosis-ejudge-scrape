
#include <iostream>
// #include <cmath>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int amount, number, sum = 0; cin >> amount;
	for (int i = 0; i < amount; i++) {
		cin >> number;
		if (number % 2 == 0) {
			sum += number;
		}
	}
	cout << sum;

	return 0;
}