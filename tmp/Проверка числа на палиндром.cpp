
#include <iostream>
#include <string>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	string a;
	cin >> a;
	bool condition = true;

	int len = a.length();

	for (int i = 0; i <= len / 2; i++) {
		if (a[i] != a[a.length() - 1 - i]) {
			condition = false;
		}
	}

	if (condition) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}

	return 0;
}