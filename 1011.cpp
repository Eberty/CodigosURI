#include <iostream>

using namespace std;

int main() {
	double r;
	
	cin >> r;
	cout.precision(3);
	cout << "VOLUME = " << fixed << (4/3.0)*(3.14159*r*r*r) << endl;
	
    return 0;
}
