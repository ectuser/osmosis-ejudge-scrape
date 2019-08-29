// #include <pch.h>
#include <iostream>
#include <vector>
// #include <cmath>
// #include <string>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, a; cin >> n;

	vector< int > two; 
	vector< int > notTwo;

	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a % 2 == 0) {
			two.push_back(a);
		}
		else {
			notTwo.push_back(a);
		}
	}
	for (int el : two) {
		cout << el << " ";
	}
	for (int el : notTwo) {
		cout << el << " ";
	}

	return 0;
}