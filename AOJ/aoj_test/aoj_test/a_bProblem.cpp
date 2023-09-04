#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int x, y;
	float a, b;
	cin >> x >> y;
	a = x;
	b = y;
	cout << x / y << endl;
	cout << x % y << endl;
	cout << fixed << setprecision(9) << a / b << endl;
	return 0;
}