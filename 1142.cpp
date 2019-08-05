#include <iostream>

using namespace std;

int main() {
	int n, i, j=0;
	
	cin >> n;
	for (i=0; i<n; i++){
		cout << j+1 << " " << j+2 << " " << j+3 << " PUM" << endl;
		j+=4;
	}
	
	return 0;
}
