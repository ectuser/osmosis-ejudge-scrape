#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	double a, b, c;
	cin >> a >> b >> c;
	if (a == 0) {
		if (b == 0 && c == 0) {
			cout << -1;
		}
		else if (b == 0) {
			cout << 0;
		}
		else {
			cout << 1 << " " << -c / b;
		}
	}
	else {
		double D = b * b - 4 * a * c;
		if (D < 0) {
			cout << 0;
		}
		else if (D == 0) {
			cout << 1 << " " << (-b) / (2 * a);
		}
		else {
			double x1 = (-b + sqrt(D)) / (2 * a);
			double x2 = (-b - sqrt(D)) / (2 * a);
			if (x1 < x2) {
				cout << 2 << " " << x1 << " " << x2;
			}
			else {
				cout << 2 << " " << x2 << " " << x1;
			}
		}
	}

	return 0;
}