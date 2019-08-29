#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int a, b, i = 0; cin >> a >> b;

	while (b <= a) {
		i++;
		a -= b;
	}
	cout << i << " " << abs(a);

	return 0;
}