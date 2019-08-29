#include <iostream>
#include <string>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	string a;
	cin >> a;
	if (a[0] == a[3] && a[1] == a[2]) {
		cout << 1;
	}
	else {
		cout << 0;
	}



	return 0;
}