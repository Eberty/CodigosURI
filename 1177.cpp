#include <iostream>

using namespace std;

int main() {
	int t, i, n[1000];
	cin >> t;
	
	for (i=0; i<1000; i++){
		n[i] = i%t;
		cout << "N[" << i << "] = " << n[i] << endl;
	}
	
	
	return 0;
}
