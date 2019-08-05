#include <iostream>

using namespace std;

int main() {
	int n;
	float x1, x2, x3;
	
	cin >> n;
	cout.precision(1);
	cout << fixed;
	for (int i=0; i<n; i++){
		cin >> x1 >> x2 >> x3;
		cout << (x1*2 + x2*3 + x3*5)/10.0 << endl;		
	}
		
    return 0;
}
