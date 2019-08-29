
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int a; cin >> a;
	for (int i = 2; i < sqrt(a); i++) {
		if (a % i == 0) {
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";

	return 0;
}