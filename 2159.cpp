#include <iostream>
#include <cmath>

using namespace std;

int main() {
	unsigned int n;
	cin >> n;
	cout.precision(1);
	cout << fixed;
	cout << n/log(n) << " " << 1.25506*(n/log(n)) << endl;
	return 0;
}
