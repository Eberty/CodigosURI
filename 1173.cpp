#include <iostream>

using namespace std;

int main() {
	int v[10], n;
	cin >> n;
	for (int i=0; i<10; i++){
		v[i] = n;
		n*=2;
		cout << "N[" << i << "] = " << v[i] << endl;
	}
	
	return 0;
}
