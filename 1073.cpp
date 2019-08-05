#include <iostream>

using namespace std;

int main() {
	int i, n;
	
	cin >> n;
	
	for (i=2; i<=n; i+=2)
		cout << fixed << i << "^2 = " << i*i << endl; 
	
    return 0;
}
