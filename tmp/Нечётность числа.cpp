#include <iostream>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a, b;
	cin >> a >> b;
	if (a % 2 == 0)
		cout << b;
	else
		cout << a;


	return 0;
}