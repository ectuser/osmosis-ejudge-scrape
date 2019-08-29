
#include <iostream>
// #include <cmath>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int v; cin >> v; int* A = NULL; A = new int[v];
	int max, maxN, min, minN; bool condition = true;

	for (int i = 0; i < v; i++) {
		cin >> A[i];
		max = A[i]; min = A[i]; maxN = i; minN = i;
	}
	
	for (int i = 0; i < v; i++) {
		if (A[i] >= max) {
			max = A[i]; maxN = i;
		}
		if (A[i] < min) {
			min = A[i]; minN = i;
			// condition = false;
		}
	}
	// cout << min << " " << minN << " " << max << " " << maxN << endl;
	swap(A[minN], A[maxN]);
	for (int i = 0; i < v; i++) {
		cout << A[i] << " ";
	}

	return 0;
}