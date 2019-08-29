
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	long long n; int r1, r2, k = 0, sum = 0; string last = "";
	cin >> n >> r1 >> r2;
	while (n > 0) {
		sum += (n % 10) * pow(r1, k);
		k++;
		n /= 10;
	}
	while (sum > 0) {
		last += to_string(sum % r2);
		sum /= r2;
	}
	for (int i = last.length() - 1; i >= 0; i--) {
		cout << last[i];
	}

	return 0;
}