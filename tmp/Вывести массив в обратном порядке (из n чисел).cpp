
#include <iostream>
// #include <cmath>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int amount, a; cin >> amount;
	int *array = new int[amount];
	
	for (int i = 0; i < amount; i++) {
		cin >> array[i];
	}
	for (int i = amount - 1; i >= 0; i--) {
		cout << array[i] << " ";
	}



	return 0;
}