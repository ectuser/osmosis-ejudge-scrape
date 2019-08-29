#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	string a;
	cin >> a;
	cout << a[0] << " " << a[1] << " " << a[2];
}
