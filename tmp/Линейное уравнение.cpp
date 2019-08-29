#include <iostream>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a; int b;
	cin >> a >> b;
	if (a == b && a == 0) {
		cout << "R";
		return 0;
	}
	else if (a == 0) {
		cout << "NO SOLUTION";
		return 0;
	}
	else {
		cout << 1.0 * (-b) / (1.0 * a);
	}
	return 0;
}
