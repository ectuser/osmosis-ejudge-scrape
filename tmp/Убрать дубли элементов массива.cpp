
#include <iostream>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, count = 0; cin >> n;

	int *a = new int[n];
	int *b = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		bool condition = true;
		for (int j = 0; j < count; j++) {
			if (a[i] == b[j]) {
				condition = false;
				break;
			}
		}
		if (condition == true) {
			b[count] = a[i];
			count++;
		}
	}
	for (int i = 0; i < count; i++) {
		cout << b[i] << " ";
	}

	return 0;
}