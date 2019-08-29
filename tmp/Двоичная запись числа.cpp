#include <iostream>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a;
	cin >> a;
	int number = 0;
	int counter = 1;
	while (a > 0) {
		number += (a % 2) * counter;
		counter *= 10;
		a /= 2;
	}
	cout << number;
	return 0;
}
