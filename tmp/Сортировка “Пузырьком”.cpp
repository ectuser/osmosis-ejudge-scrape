#include <iostream>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n; cin >> n;

	int *a = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (a[i] > a[j]) {
				int another = a[i];
				a[i] = a[j];
				a[j] = another;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	return 0;
}