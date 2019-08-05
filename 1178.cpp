#include <iostream>

using namespace std;

int main() {
	double x, n[100];
	cin >> x;
	cout.precision(4);
	cout << fixed;
	
	for (int i=0; i<100; i++){
		n[i] = x;
		x /= 2.0;
		cout << "N[" << i << "] = " << n[i] << endl;
	}
	
	
	return 0;
}
