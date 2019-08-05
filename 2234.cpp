#include <iostream>

using namespace std;

int main() {
	int h, p;
	//double x;
	cin >> h >> p;
	cout.precision(2);
	cout << fixed;
	cout << h/(double)p << endl;
	return 0;
}
