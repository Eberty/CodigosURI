#include <iostream>

using namespace std;

int main() {
	int n, i, v[] = {100, 50, 20, 10, 5, 2, 1} ;
	
	cin >> n;
	cout << n << endl;
	for (i=0; i<7; i++){
		cout << n/v[i] << " nota(s) de R$ " << v[i] << ",00" << endl;
		n %= v[i];		
	}
	
    return 0;
}
