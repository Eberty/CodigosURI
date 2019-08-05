#include <iostream>

using namespace std;

int main() {
	int tipo, resp, c=0;
	cin >> tipo;
	for (int i=0; i<5; i++){
		cin >> resp;
		if (resp == tipo)
			c++;
	}
	
	cout << c << endl;
	return 0;
}
