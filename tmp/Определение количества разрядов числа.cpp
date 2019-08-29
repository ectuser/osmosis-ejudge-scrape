
#include <iostream>
// #include <cmath>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	long long a, i = 0; cin >> a;

	while (a > 0) {
		i++; a /= 10;
	}
	cout << i;
	
	



	return 0;
}