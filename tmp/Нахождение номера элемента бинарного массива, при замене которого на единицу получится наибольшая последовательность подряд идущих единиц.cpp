
#include <iostream>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, len = 0, count = 0, zeroCount = 0; cin >> n;
	bool condition = false;
	int *a = new int[n];
	int *lengthes = new int[n];
	int *zeros = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		if (a[i] == 1) {
			len++;
			lengthes[count] = len;
			condition = true;
		}
		else {
			if (condition == true) {
				count++;
				len = 0;
				zeros[zeroCount] = i;
				zeroCount++;
			}
		}
	}
	int maxSum = 0;
	int between = 0;
	for (int i = 1; i < count + 1; i++) {
		if (lengthes[i] + lengthes[i - 1] > maxSum) {
			maxSum = lengthes[i] + lengthes[i - 1];
			between = i - 1;
		}
	}
	cout << zeros[between] + 1;
	return 0;
}