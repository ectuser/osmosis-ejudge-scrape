
#include <iostream>
// #include <cmath>
// #include <string>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	long long n, a, b; cin >> n >> a >> b; bool conditionMed = false, conditionUp = false, conditionDown = false;

	if (b > a) {
		conditionUp = true;
	}
	else if (a == b) {
		conditionMed = true;
	}
	else if (b < a) {
		conditionDown = true;
	}

	// cout << a << " " << b << " " << conditionUp << " " << conditionMed << " " << conditionDown << endl;

	for (int i = 2; i < n; i++) {
		a = b; cin >> b;
		if (b > a) {
			conditionUp = true;
		}
		else if (a == b) {
			conditionMed = true;
		}
		else if (b < a) {
			conditionDown = true;
		}
		// cout << a << " " << b << conditionUp << " " << conditionMed << " " << conditionDown << endl;
	}

	if (conditionUp == true && conditionDown == true) {
		cout << 0;
	}
	else if (conditionMed == true && (conditionUp == true || conditionDown == true)) {
		cout << 1;
	}
	else {
		cout << 2;
	}
	

	return 0;
}