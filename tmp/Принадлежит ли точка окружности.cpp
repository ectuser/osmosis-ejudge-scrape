#include <iostream>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int x, y, r, x0, y0;
	cin >> x >> y >> r >> x0 >> y0;
	if (((x0 - x) * (x0 - x) + (y0 - y) * (y0 - y)) == r * r) {
		cout << 1;
	}
	else {
		cout << 0;
	}

	return 0;
}