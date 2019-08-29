
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	double a; cin >> a;

	if (a == 1) {
		cout << "Yes";
		return 0;
	}

	int pr = 1;

	for (int i = 1; pr <= a; i++) {
		pr *= 2;
		if (pr == a) {
			cout << "Yes";
			return 0;
		}
	}
	cout << "No";

	return 0;
}