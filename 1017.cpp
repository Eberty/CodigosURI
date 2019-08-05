#include <iostream>

using namespace std;

int main() {
	int t, vm;
	
	cin >> t >> vm;
	cout.precision(3);
	cout << fixed << (t*vm)/12.0 << endl;
	
    return 0;
}
