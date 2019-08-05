#include <iostream>

using namespace std;

int main() {
	float v[100];
	
	cout.precision(1);
	cout << fixed;
	
	for (int i=0; i<100; i++){
		cin >> v[i];
		if (v[i] <= 10)
			cout << "A[" << i << "] = " << v[i] << endl;
	}
	
	return 0;
}
