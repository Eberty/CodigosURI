#include <iostream>

using namespace std;

int main() {
	int n[20], aux;
	
	for (int i=0; i<20; i++){
		cin >> n[i];
	}
	
	for (int i=0; i<10; i++){
		aux = n[i];
		n[i] = n[19-i];
		n[19-i] = aux;
		cout << "N[" << i << "] = " << n[i] << endl;
	}
	
	for (int i=10; i<20; i++)
		cout << "N[" << i << "] = " << n[i] << endl;
	
	
	return 0;
}
