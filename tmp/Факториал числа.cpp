
#include <iostream>


using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	long long a, f = 1;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		f *= i;
	}
	cout << f;


	return 0;
}