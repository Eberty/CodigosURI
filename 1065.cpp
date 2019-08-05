#include <iostream>

using namespace std;

int main() {
	int v[5], p=0;
	
	for (int i=0; i<5; i++){
		cin >> v[i];
		if (v[i]%2 == 0)
			p++;
	}
	
	cout << p << " valores pares" << endl;
	
    return 0;
}

