#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a; int b;
	cin >> a;
	long long P = 4 * a;
	long long S = a * a;
	cout << P << " " << S;

	return 0;
}
