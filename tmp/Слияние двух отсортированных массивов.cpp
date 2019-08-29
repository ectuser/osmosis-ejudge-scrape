
#include <iostream>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n1, n2, first = 0, second = 0, count = 0; cin >> n1 >> n2;

	int *a1 = new int[n1];
	int *a2 = new int[n2];
	int *last = new int[n1 + n2];

	for (int i = 0; i < n1; i++) {
		cin >> a1[i];
	}
	for (int i = 0; i < n2; i++) {
		cin >> a2[i];
	}


	while (first < n1 && second < n2) {
		if (a1[first] <= a2[second]) {
			last[count] = a1[first];
			first++;
			count++;
		}
		else {
			last[count] = a2[second];
			second++;
			count++;
		}
	}
	if (first < n1) {
		while (first < n1) {
			last[count] = a1[first];
			first++;
			count++;
		}
	}
	else if (second < n2) {
		while (second < n2) {
			last[count] = a2[second];
			second++;
			count++;
		}
	}
	for (int i = 0; i < n1 + n2; i++) {
		cout << last[i] << " ";
	}


	return 0;
}