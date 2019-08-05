#include <iostream>

using namespace std;

int main() {
	unsigned int i, qt, n1, n2;
	string j1, r1, j2, r2;
	
	cin >> qt;
	for (i=0; i<qt; i++){
		cin >> j1 >> r1 >> j2 >> r2;
		cin >> n1 >> n2;
		if (r1.compare("IMPAR") == 0){
			if ( (n1+n2)&1 )
				cout << j1 << endl;
			else
				cout << j2 << endl;
		}else{
			if ( (n1+n2)&1 )
				cout << j2 << endl;
			else
				cout << j1 << endl;
		}
	}
	return 0;
}
